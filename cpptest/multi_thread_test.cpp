////
//// Created by 冯银发 on 2024/2/29.
////
//
//
//#include <iostream>
//#include <thread>
//#include <mutex>
//#include <condition_variable>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//void hello() {
//    for(int i = 0; i < 10000; ++i) {
//        cout << "hello world" << endl;
//    }
//    cout << "child_thread: " << this_thread::get_id() << " end" << endl;
//}
//
//int main() {
//    //thread my_thread(hello);
//    //my_thread.joinable()用来返回线程是否可以调用join()和detach()，返回值是bool类型
////    my_thread.join();  //主线程阻塞，等待子线程执行完毕，再接着往后执行
////    my_thread.detach();  //主线程与子线程分离，主线程结束后，子线程依然在后台执行；若没有这句，则主线程执行结束，子线程会被停止执行
//    cout << "main_thread: " << this_thread::get_id() << " end" << endl;
//    std::chrono::milliseconds dura(5000);
//    std::this_thread::sleep_for(dura);
//    vector<string> v;
//    v.insert();
//    move
//
//    return 0;
//}




//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <queue>
//
//using namespace std;
//
//unordered_map<int, vector<int>> children;  // 存储每只母猪和它的孩子们
//unordered_map<int, int> parent;            // 存储每只猪崽和它的母亲
//
//// 用于找到两只猪之间的最短路径
//int findRelationDistance(int m1, int m2) {
//    if (m1 == m2) return 0;
//
//    // 用于记录已访问的节点，防止在搜索中重复访问
//    unordered_map<int, bool> visited;
//
//    // 使用BFS来找到最短路径
//    queue<pair<int, int>> q;  // 队列中存储节点以及从起点到该节点的距离
//    q.push({m1, 0});          // 从m1开始搜索
//
//    while (!q.empty()) {
//        auto [current, distance] = q.front();
//        q.pop();
//
//        // 访问所有子猪
//        for (int child : children[current]) {
//            if (child == m2) return distance + 1;  // 找到m2
//            if (!visited[child]) {
//                q.push({child, distance + 1});
//                visited[child] = true;
//            }
//        }
//
//        // 如果存在母猪，也访问母猪
//        if (parent.find(current) != parent.end()) {
//            int mother = parent[current];
//            if (mother == m2) return distance + 1;  // 找到m2
//            if (!visited[mother]) {
//                q.push({mother, distance + 1});
//                visited[mother] = true;
//            }
//        }
//    }
//
//    return -1;  // 如果没有找到路径，则返回-1
//}
//
//int main() {
//    int N, M, x, y, m1, m2;
//
//    // 读入总数N和记录行数M
//    cin >> N >> M;
//
//    // 读入生产记录
//    for (int i = 0; i < M; ++i) {
//        cin >> x;
//        while (cin.peek() != '\n' && cin.peek() != EOF) {
//            cin >> y;
//            children[x].push_back(y);  // 存储母子关系
//            parent[y] = x;             // 存储子母关系
//        }
//    }
//
//    // 读入待检查的编号
//    cin >> m1 >> m2;
//
//    // 输出关系距离
//    cout << findRelationDistance(m1, m2) << endl;
//
//    return 0;
//}


//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    vector<int> v;
//}
