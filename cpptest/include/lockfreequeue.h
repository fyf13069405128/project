#ifndef LOCKFREEQUEUE_H
#define LOCKFREEQUEUE_H

#include <atomic>
#include <iostream>
#include <string>
using namespace std;

template<typename T>
class LockFreeQueue {
private:
    struct Node {
        T data;
        Node* next;

        Node(T data) : data(data), next(nullptr) { }
    };

    //注意head是原子变量，头结点head非固定，在出队的过程中head指针会往后走，head当前指向的结点是刚刚已经出队的
    //如果固定头结点head，通过head->next = head->next->next来出队，则head没变，各个线程不会冲突，会同时修改head指向的内容，造成线程不安全
    std::atomic<Node*> head;
    std::atomic<Node*> tail;

public:
    LockFreeQueue() {
        Node* dummy = new Node(T());
        head.store(dummy);
        tail.store(dummy);
    }

    ~LockFreeQueue() {
        while (Node* old_head = head.load()) {
            head.store(old_head->next);
            delete old_head;
        }
    }

    void enqueue(T data) {
        Node* new_node = new Node(data);
        Node* old_tail = tail.load();
        //下面出队一样可以修改下，还没改，用成员函数更方便些
        while(!tail.compare_exchange_weak(old_tail, new_node)) {
            //old_tail会自动更新，故while函数内部不需要写东西
        }
        old_tail->next = new_node;

        //while (!std::atomic_compare_exchange_weak(&tail, &old_tail, new_node)) {
        //    old_tail = tail.load(); // Reload tail, because other thread may have updated it
        //}
        //old_tail->next = new_node;
    }

    bool dequeue(T& result) {
        Node* old_head = head.load();
        //出队前确保队列中有元素
        while(old_head != tail.load()) {
            if(head.compare_exchange_weak(old_head, old_head->next)) {
                result = old_head->next->data;
                delete old_head;
                return true;
            }
        }
        return false;

//        while (old_head != tail.load()) {
//            if (std::atomic_compare_exchange_weak(&head, &old_head, old_head->next)) {
//                result = old_head->next->data;
//                delete old_head;
//                return true;
//            }
//            old_head = head.load(); // Reload head, because other thread may have updated it
//        }
//        return false; // Queue was empty
    }
};


#endif


