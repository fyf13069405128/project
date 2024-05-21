#include <thread>
#include <atomic>
#include <boost/lockfree/queue.hpp>


//#include "threadpool.h"

//#include "lockfreethreadpool.h"
//#include "lockfreequeue.h"

#include "boostlockfreethreadpool.h"

using namespace std;



//int main() {
//    LockFreeQueue<string*> queue;
//    string* s1 = new string("abc");
//    string* s2 = new string("xyz");
//    queue.enqueue(s1);
//    queue.enqueue(s2);
//
//
//    string* value;
//    if (queue.dequeue(value)) {
//        std::cout << "Dequeued: " << *value << std::endl;
//    }
//    if (queue.dequeue(value)) {
//        std::cout << "Dequeued: " << *value << std::endl;
//    }
//
//    return 0;
//}

atomic<int> task_number;

class http {
public:
    void process() {
        //cout << "thread id: " << std::this_thread::get_id() << " is processing" << endl;
        this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    int* data;
};

//void func(int*& p);
//int data = 100;

int main() {
    task_number.store(0);
    threadPool<http> tpool(12);

    auto start = std::chrono::high_resolution_clock::now();
    int n = 10000;
    int num = n;
    int i = 1;

    vector<thread> v;
    for(int i = 0; i < 12; ++i) {
        v.push_back(thread([&] {
            while(true) {
                if(task_number.load() < num) {
                    tpool.append(new http());
                }else {
                    return;
                }
            }
        }));
    }

//    while(n--) {
//        tpool.append(new http());
//        cout << "append:" << i << endl;
//        i++;
//    }

    while(task_number.load() < num) {

    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end - start;
    cout << "used time: " << diff.count() << " seconds" << endl;
    cout << "task_number: " << task_number.load() << endl;

    for(int i = 0; i < 12; ++i) {
        v[i].join();
    }

//    http* p = NULL;
//    //p->process();
//    int a = p->data;
//    //http b = *p;

//    http temp;
//    int data = 100;
//    temp.data = &data;
//    int* p = nullptr;
//    func(p);
//    cout << *p << endl;

    return 0;
}

//void func(int*& p) {
//    http temp;
//    temp.data = &data;
//    p = temp.data;
//}



//#include <boost/lockfree/queue.hpp>
//#include <iostream>
//
//int main() {
//    boost::lockfree::queue<int> queue(128);
//
//    queue.push(1);
//    queue.push(2);
//
//    int value;
//    while (queue.pop(value)) {
//        std::cout << "Value: " << value << std::endl;
//    }
//
//    return 0;
//}
