
//AC
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    vector<int> arr(n, 0);
//    vector<int> res(4, 0);
//    for(int i = 0; i < n; ++i) {
//        cin >> arr[i];
//        if(arr[i] - 1 == 0 || arr[i] - 1 > 2) {
//            res[0]++;
//        }
//        if (arr[i] - 3 == 0 || arr[i] - 3 > 2) {
//            res[1]++;
//        }
//        if(arr[i] - 6 == 0 || arr[i] - 6 > 2) {
//            res[2]++;
//        }
//        if(arr[i] - 10 == 0 || arr[i] - 10 > 2) {
//            res[3]++;
//        }
//    }
////    for(int i = 0; i < 4; ++i) {
////        cout << res[i] << endl;
////    }
//    return 0;
//}





//AC
//#include <bits/stdc++.h>
//using namespace std;
//
//vector<int> dp(16384, INT_MAX);
//
//void func() {
//    dp[1] = 0;
//    for (int i = 2; i <= 16384; ++i) {
//        for (int j = 1; j < i; ++j) {
//            if ((i % j) == 0) {
//                dp[i] = min(dp[i], dp[j] + 2 + (i / j - 1));
//            }else {
//                dp[i] = min(dp[i], dp[j] + 2 + i - j);
//            }
//        }
//    }
//}
//
//int main() {
//    int n;
//    cin >> n;
//    vector<int> arr(n, 0);
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//    vector<int> res(n);
//    func();
//    for (int i = 0; i < n; ++i) {
//        res[i] = dp[arr[i]];
//    }
//    for (int i = 0; i < n; ++i) {
//        cout << res[i] << endl;
//    }
//    return 0;
//}



//80%
#include <bits/stdc++.h>
using namespace std;

struct cmp {
    bool operator () (int a, int b) {
        return a > b;
    }
};



int func(int x, vector<int>& arr1, int target) {
 //   sort(arr1.begin(), arr1.end(), cmp());
//    for(int i = 0; i < arr1.size(); ++i) {
//        cout << arr1[i] << " ";
//    }
    vector<bool> vis(arr1.size(), false);
    int count = 0;
    while(true) {
        int temp = 0;
        int k = 0;
        for(int i = 0; i < arr1.size(); ++i) {
            if(vis[i] == false && x > arr1[i]) {
                temp = arr1[i];
                k = i;
            }else if(x <= arr1[i]) {
                break;
            }
        }
        if(x / 10 > temp) {
            x += (x / 10);
            count++;
        }else {
            x += temp;
            vis[k] = true;
            count++;
        }
        if(x > target) {
            break;
        }
    }
    return count;
}

int main() {
    int x, m, n;
    cin >> x >> m >> n;
    vector<int> arr1(m, 0);
    vector<int> arr2(n, 0);
    for(int i = 0; i < m; ++i) {
        cin >> arr1[i];
    }
    for(int i = 0; i < n; ++i) {
        cin >> arr2[i];
    }
    vector<int> res(n);
    for(int i = 0; i < n; ++i) {
        res[i] = func(x, arr1, arr2[i]);
    }
    for(int i = 0; i < n; ++i) {
        cout << res[i] << endl;
    }
    return 0;
}



//50%
//#include <bits/stdc++.h>
//using namespace std;
//
//struct cmp {
//    bool operator () (int a, int b) {
//        return a > b;
//    }
//};
//
//int func(int x, vector<int>& arr1, int target) {
//    sort(arr1.begin(), arr1.end(), cmp());
////    for(int i = 0; i < arr1.size(); ++i) {
////        cout << arr1[i] << " ";
////    }
//    vector<bool> vis(arr1.size(), false);
//    int count = 0;
//    while (true) {
//        int i;
//        for (i = 0; i < arr1.size(); ++i) {
//            if (vis[i] == false && x > arr1[i]) {
//                if (x / 10 > arr1[i]) {
//                    x += (x / 10);
//                    count++;
//                    break;
//                } else {
//                    x += arr1[i];
//                    vis[i] = true;
//                    count++;
//                    break;
//                }
//            }
//        }
//        if (i == arr1.size()) {
//            x += (x / 10);
//            count++;
//        }
//        if (x > target) {
//            break;
//        }
//    }
//    return count;
//}
//
//int main() {
//    int x, m, n;
//    cin >> x >> m >> n;
//    vector<int> arr1(m, 0);
//    vector<int> arr2(n, 0);
//    for (int i = 0; i < m; ++i) {
//        cin >> arr1[i];
//    }
//    for (int i = 0; i < n; ++i) {
//        cin >> arr2[i];
//    }
//    vector<int> res(n);
//    for (int i = 0; i < n; ++i) {
//        res[i] = func(x, arr1, arr2[i]);
//    }
//    for (int i = 0; i < n; ++i) {
//        cout << res[i] << endl;
//    }
//    return 0;
//}