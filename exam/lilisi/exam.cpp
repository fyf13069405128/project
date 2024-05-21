

//AC
//#include <bits/stdc++.h>
//using namespace std;
//
//bool judge(vector<vector<char>> temp, char c, int i, int j) {
//    bool flag = true;
//    for(int x = 0; x < 3; ++x) {
//        if(temp[i][x] != c) flag = false;
//    }
//    if(flag) return flag;
//    flag = true;
//    for(int x = 0; x < 3; ++x) {
//        if(temp[x][j] != c) flag = false;
//    }
//    return flag;
//}
//
//
//
//int main() {
//    vector<vector<char>> temp(3, vector<char>(3));
//    for(int i = 0; i < 3; ++i) {
//        for(int j = 0; j < 3; ++j) {
//            cin >> temp[i][j];
//        }
//    }
//    for(int i = 0; i < 3; ++i) {
//        for(int j = 0; j < 3; ++j) {
//            if(i == 1 && j == 1) {
//                if(temp[i][j] == 'K') {
//                    if(judge(temp, 'K', i, j) || (temp[0][0] == 'K' && temp[2][2] == 'K') || (temp[0][2] == 'K' && temp[2][0] == 'K')) {
//                        cout << "KiKi wins!";
//                        return 0;
//                    }
//                }else if (temp[i][j] == 'B') {
//                    if(judge(temp, 'B', i, j) || (temp[0][0] == 'B' && temp[2][2] == 'B') || (temp[0][2] == 'B' && temp[2][0] == 'B')) {
//                        cout << "BoBo wins!";
//                        return 0;
//                    }
//                }
//            }else if(temp[i][j] == 'K') {
//                if(judge(temp, 'K', i, j)) {
//                    cout << "KiKi wins!";
//                    return 0;
//                }
//            }else if(temp[i][j] == 'B') {
//                if(judge(temp, 'B', i, j)) {
//                    cout << "BoBo wins!";
//                    return 0;
//                }
//            }
//        }
//    }
//    cout << "No winner!";
//    return 0;
//}


//40%
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 0, y = 0, i = 0, j = 0;
    string s;
    getline(cin, s);
    for(int k = 0; k < s.size(); ++k) {
        if(s[k] == '(') {
            x++;
        }else if(s[k] == '[') {
            y++;
        }else if(s[k] == ')') {
            i++;
        }else if(s[k] == ']') {
            j++;
        }
    }
    int ans = abs(x - i) + abs(y - j);
    cout << ans;
    return 0;
}


//25%
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n, k;
//    cin >> n >> k;
//    vector<int> arr(n);
//    for(int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//    cout << n;
//}