
//AC
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    char c1, c2;
//    cin >> c1 >> c2;
//    int dx[4] = {-1, 1, 0, 0};
//    int dy[4] = {0, 0, -1, 1};
//    vector<vector<char>> res(n, vector<char>(m, c1));
//    vector<vector<bool>> vis(n, vector<bool>(m, false));
//    queue<pair<int, int>> q;
//    q.push(make_pair(0, 0));
//    vis[0][0] = true;
//    //res[0][0] = c1;
//    while(!q.empty()) {
//        auto [i, j] = q.front();
//        q.pop();
//        for(int dir = 0; dir < 4; ++dir) {
//            int x = i + dx[dir];
//            int y = j + dy[dir];
//            if(x >= 0 && x < n && y >= 0 && y < m && !vis[x][y]) {
//                q.push(make_pair(x, y));
//                vis[x][y] = true;
//                if(res[i][j] == c1) {
//                    res[x][y] = c2;
//                }
//            }
//        }
//    }
//    for(int i = 0; i < n; ++i) {
//        for(int j = 0; j < m; ++j) {
//            cout << res[i][j];
//        }
//        cout << endl;
//    }
//    return 0;
//}


//10%
//题目描述：10^1000范围，大数截取中间k位，对p取模，求最大值
//输入
//12332
//3 12
//输出
//8

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    string s;
//    cin >> s;
//    int k, p;
//    cin >> k >> p;
//    int ans = 0;
//    for(int i = 0; i + k <= s.size(); ++i) {
//        string str = s.substr(i, k);
//        long double val = stold(str);
//        long double temp = (long double)p;
//        while(val >= temp) {
//            val -= temp;
//        }
//        //long long val = stoll(str);
//        //int x = val % p;
//        if(val > ans) {
//            ans = val;
//        }
//    }
//    cout << ans << endl;
//    //long double val = 1000000000000000000000000000000000.0F;
//    //cout << val << endl;
//    return 0;
//}




//20%
//题目描述：求一个数组任何区间[left,right]元素乘积对6取模的值，n是元素个数，q是查询次数
//输入
//5 3
//1 2 3 4 5
//2 4
//4 5
//1 2
//输出
//0
//2
//2

//#include <bits/stdc++.h>
//using namespace std;
//
//int func(vector<int>& temp, int left, int right) {
//    int ans = 1;
//    for(int i = left; i <= right; ++i) {
//        ans = (ans * temp[i]) % 6;
//        if(ans == 0) return 0;
//    }
//    return ans;
//}
//
//int main() {
//    int n, q;
//    cin >> n >> q;
//    vector<int> arr(n);
//    vector<int> temp(n);
//    for(int i = 0; i < n; ++i) {
//        cin >> arr[i];
//        temp[i] = arr[i] % 6;
//    }
//    vector<pair<int, int>> query(q);
//    for(int i = 0; i < q; ++i) {
//        int x, y;
//        cin >> x >> y;
//        query[i] = make_pair(x, y);
//    }
//    //vector<int> res(q);
//    for(int i = 0; i < q; ++i) {
//        int x = func(temp, query[i].first - 1, query[i].second - 1);
//        cout << x << endl;
//    }
//    return 0;
//}



//测试用例通过，但是提交0%
//题目描述，给一个树，求f(i)-f(n)，以i顶点为起点，所有路径中的值组合为3的倍数的路径条数
//输入
//3
//1 2 3
//1 2
//2 3
//输出
//2
//1
//2

#include <bits/stdc++.h>
using namespace std;

void func(vector<vector<int>>& v, vector<int>& arr, vector<bool>& vis, int x, int& num, int& count) {
    for(int i = 0; i < v[x].size() && !vis[v[x][i]]; ++i) {
        num += arr[v[x][i]];
        vis[v[x][i]] = true;
        if(num % 3 == 0) {
            count++;
        }
        func(v, arr, vis, v[x][i], num, count);
        num -= arr[v[x][i]];
        vis[v[x][i]] = false;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for(int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }
    vector<vector<int>> v(n + 1);
    for(int i = 0; i < n - 1; ++i) {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    vector<bool> vis(n + 1, false);
    for(int i = 1; i <= n; ++i) {
        int num = arr[i];
        int count = 0;
        if(num % 3 == 0) {
            count++;
        }
        func(v, arr, vis, i, num, count);
        cout << count << endl;
    }
    return 0;
}