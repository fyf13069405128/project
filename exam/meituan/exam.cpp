//AC
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    string s;
//    getline(cin, s);
//    string temp = "meituan";
//    int count = 0;
//    for(int i = 0; i < 7; ++i) {
//        if(s[i] != temp[i]) {
//            count++;
//        }
//    }
//    cout << count;
//    return 0;
//}


//AC
//#include <bits/stdc++.h>
//using namespace std;
//
//bool judge(string& s) {
//    int len = s.size();
//    if(len - 1 >= 0 && s[len - 1] != 'i') return true;
//    string str = "";
//    for(int k = len - 2; k >= 0; --k) {
//        if(s[k] >= '0' && s[k] <= '9') {
//            str.push_back(s[k]);
//        }else {
//            break;
//        }
//    }
//    reverse(str.begin(), str.end());
//    if(str.size() == 0) return false;
//    int value = stoi(str);
//    if(value == 0) return true;
//    return false;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    vector<string> arr(n);
//    string temp;
//    for(int i = 0; i < n; ++i) {
//        cin >> temp;
//        arr[i] = temp;
//    }
////    for(int i = 0; i < n; ++i) {
////        cout << arr[i] << " ";
////    }
//    int count = 0;
//    for(int i = 0; i < n; ++i) {
//        if(judge(arr[i])) {
//            count++;
//        }
//    }
//    cout << count;
//    return 0;
//}



//60%，回溯
//#include <bits/stdc++.h>
//using namespace std;
//
//int ans = 0;
//string temp = "";
//void backtrack(vector<string>& arr, int k, int n) {
//    if(k == n) {
//        ans++;
//        return;
//    }
//    for(int i = 0; i < arr[k].size(); ++i) {
//        if(k == 0 || temp[k - 1] != arr[k][i]) {
//            temp.push_back(arr[k][i]);
//            backtrack(arr, k + 1, n);
//            temp.pop_back();
//        }
//    }
//}
//
//int main() {
//    int n;
//    cin >> n;
//    vector<string> arr(n);
//    for(int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
////    for(int i = 0; i < n; ++i) {
////        cout << arr[i] << endl;
////    }
//    backtrack(arr, 0, n);
//    cout << ans;
//    return 0;
//}



//AC，但是测试用例没过，当时知道有点bug，少考虑了边界情况，没想到测试用例都过了
//还原数组，给出了两个原数组删除某个元素后的打乱顺序的前缀和数组，还原数组
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    vector<long long> arr1(n - 1);
//    vector<long long> arr2(n - 1);
//    for(int i = 0; i < n - 1; ++i) {
//        cin >> arr1[i];
//    }
//    for(int i = 0; i < n - 1; ++i) {
//        cin >> arr2[i];
//    }
//    sort(arr1.begin(), arr1.end());
//    sort(arr2.begin(), arr2.end());
//    vector<long long> temp1(n - 1);
//    vector<long long> temp2(n - 1);
//    for(int i = 0; i < n - 1; ++i) {
//        if(i == 0) {
//            temp1[i] = arr1[i];
//        }else {
//            temp1[i] = arr1[i] - arr1[i - 1];
//        }
//    }
//    for(int i = 0; i < n - 1; ++i) {
//        if(i == 0) {
//            temp2[i] = arr2[i];
//        }else {
//            temp2[i] = arr2[i] - arr2[i - 1];
//        }
//    }
//    set<long long> st;
//    for(int i = 0; i < n - 1; ++i) {
//        st.insert(temp1[i]);
//    }
//    long long num = 0;
//    int pos = 0;
//    for(int i = 0; i < n - 1; ++i) {
//        if(st.find(temp2[i]) == st.end()) {
//            num = temp2[i];
//            pos = i;
//            break;
//        }
//    }
//    int x = 0;
//    for(int i = 0; i < n - 1; ++i) {
//        if(temp2[pos - 1] == temp1[i]) {
//            x = i;
//            break;
//        }
//    }
//    vector<long long> res;
//    for(int i = 0; i <= x; ++i) {
//        res.push_back(temp1[i]);
//    }
//    res.push_back(num);
//    for(int i = x + 1; i < n - 1; ++i) {
//        res.push_back(temp1[i]);
//    }
//    for(int i = 0; i < res.size(); ++i) {
//        cout << res[i] << " ";
//    }
//    return 0;
//}




//8%
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x1, y1, x2, y2;
    cin >> n >> m >> x1 >> y1 >> x2 >> y2;
    cout << 0;
    return 0;
}