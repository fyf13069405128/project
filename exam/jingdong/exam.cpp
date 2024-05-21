//AC
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n;
//    string s;
//    cin >> n;
//    cin >> s;
//    string temp = "pacman";
//    int count = 0;
//    for(int i = 0; i < s.size(); ++i) {
//        if(s[i] == 'p') {
//            int j;
//            for(j = 0; j < 6; ++j) {
//                if(i + j >= s.size() || s[i + j] != temp[j]) {
//                    break;
//                }
//            }
//            if(j == 6) count++;
//        }
//    }
//    cout << count;
//
//}












//38%
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//
//bool judge(int x) {
//    for (int i = 2; i < x; ++i) {
//        if (x % i == 0) return false;
//    }
//    return true;
//}
//
//
//int main() {
//    int n;
//    cin >> n;
//    int count = 0;
//    vector<bool> temp(n * n + 1, false);
//    for(long long i = 0; i < n; ++i) {
//        if(judge(i)) {
//            temp[i] = true;
//        }
//    }
//    for (int i = 2; i <= n; ++i) {
//        if (temp[i] == false) {
//            continue;
//        }
//        for (int j = 2; j <= n && j < i * i; ++j) {
//            if(temp[j] == false || temp[i * i - j] == false) {
//                continue;
//            }
//            // if (judge(j) == false || judge(i * i - j) == false) {
//            //     continue;
//            // }
//            if (i * i - j <= n && i * i - j != 1) {
//                // cout << j << i * i - j << i << endl;
//                count++;
//            }
//        }
//    }
//    cout << count;
//}

















//0，总感觉是题目答案出错了，自己举的例子和一些边界条件都能运行正确
//将硬币反转，0为正面，1为反面，反转规则：若有k个硬币反面，则反转第k个位置硬币
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    unordered_map<char, int> dic;
    int count = 0;
    for (int i = 0; i < s.size(); ++i) {
        dic[s[i]]++;
    }
    // cout << dic['1'] << endl;
    // cout << dic['0'] << endl;

    while (true) {
        int num = dic['1'];
        if (num == 0) {
            break;
        }
        if (s[num - 1] == '0') {
            s[num - 1] = '1';
            dic['0']--;
            dic['1']++;
            count++;
        } else {
            s[num - 1] = '0';
            dic['0']++;
            dic['1']--;
            count++;
        }
        if (count == 10000000) {
            break;
        }
    }
    if (count == 10000000) {
        cout << -1 << endl;
    } else {
        cout << count << endl;;
    }

    //cout << n;
    return 0;
}



