#include <bits/stdc++.h>
using namespace std;

//"hello world, my friends"
//

//AC
//class Solution {
//public:
//    /**
//     * Note: 类名、方法名、参数名已经指定，请勿修改
//     *
//     *
//     *
//     * @param originStr string字符串
//     * @return string字符串
//     */
//    string ReverseString(string originStr) {
//        // write code here
//        string res = "";
//        int i = 0, j = 0;
//        while(j < originStr.size()) {
//            while(j < originStr.size() && originStr[j] != ' ') {
//                j++;
//            }
//            string temp = originStr.substr(i, j - i);
//            reverse(temp.begin(), temp.end());
//            if(res.empty()) {
//                res += temp;
//            }else {
//                res = res + " " + temp;
//            }
//            j++;
//            i = j;
//        }
//        return res;
//    }
//};
//
//
//int main() {
//    Solution test;
//    string s = "hello world, my friends";
//    string res = test.ReverseString(s);
//    cout << res << endl;
//    return 0;
//}




//90%
//[10,2]  [10,9,8]
//210   9810

//class Solution {
//public:
//    /**
//     * Note: 类名、方法名、参数名已经指定，请勿修改
//     *
//     *
//     *
//     * @param nums int整型 vector
//     * @return string字符串
//     */
//    string LargestNum(vector<int>& nums) {
//        // write code here
//        vector<string> v;
//        for(int num : nums) {
//            v.push_back(to_string(num));
//        }
//        sort(v.begin(), v.end(), cmp);
//        string res = "";
//        for(string s : v) {
//            res += s;
//        }
//        return res;
//    }
//
//    static bool cmp(string x, string y) {
//        return x + y > y + x;
//    }
//};
//
//int main() {
//    Solution test;
//    vector<int> nums{10, 2};
//    string s = test.LargestNum(nums);
//    cout << s << endl;
//}





//[10,5,6,11,2,3],10
//[5,2,3]


//class Solution {
//public:
//    /**
//     * Note: 类名、方法名、参数名已经指定，请勿修改
//     *
//     *
//     * 根据价格列表和当前点券数，计算出能买到的最多英雄
//     * @param costs int整型 vector 英雄点券价格列表
//     * @param coins int整型  拥有的点券
//     * @return int整型vector
//     */
//    vector<int> solution(vector<int>& costs, int coins) {
//        // write code here
//        int n = costs.size();
//        vector<vector<int>> dp(n, vector<int>(coins + 1, 0));
//        vector<vector<bool>> vis(n, vector<bool>(coins + 1, false));
//        dp[0][0] = 0;
//        if(costs[0] <= coins) {
//            dp[0][costs[0]] = 1;
//            vis[0][costs[0]] = true;
//        }
//        for(int i = 1; i < costs.size(); ++i) {
//            for(int j = 0; j <= coins; ++j) {
//                if(costs[i] <= j) {
//                    //优先选择靠前的方案
//                    if(dp[i - 1][j - costs[i]] + 1 > dp[i - 1][j]) {
//                        dp[i][j] = dp[i - 1][j - costs[i]] + 1;
//                        vis[i][j] = true;
//                    }else {
//                        dp[i][j] = dp[i - 1][j];
//                    }
//                }else {
//                    dp[i][j] = dp[i - 1][j];
//                }
//            }
//        }
//        //cout << dp[n - 1][coins] << endl;
//        vector<int> res;
//        int x = n - 1;
//        for(int j = coins; j >= 0 && x >= 0;) {
//            if(vis[x][j]) {
//                res.push_back(costs[x]);
//                j -= costs[x];
//                x = x - 1;
//            }else {
//                x = x - 1;
//            }
//        }
//        reverse(res.begin(), res.end());
//
//        for(int i = 0; i < res.size(); ++i) {
//            cout << res[i] << " " ;
//        }
//        return res;
//    }
//};



//66%
//背包问题，并且输出选的值
//滚动数组空间优化
class Solution {
public:
    /**
     * Note: 类名、方法名、参数名已经指定，请勿修改
     *
     *
     * 根据价格列表和当前点券数，计算出能买到的最多英雄
     * @param costs int整型 vector 英雄点券价格列表
     * @param coins int整型  拥有的点券
     * @return int整型vector
     */
    vector<int> solution(vector<int>& costs, int coins) {
        //滚动数组空间优化
        // write code here
        int n = costs.size();
        //vector<vector<int>> dp(n, vector<int>(coins + 1, 0));
        vector<int> dp(coins + 1, 0);
        vector<vector<bool>> vis(n, vector<bool>(coins + 1, false));

        if(costs[0] <= coins) {
            dp[costs[0]] = 1;
            vis[0][costs[0]] = true;
        }
        for(int i = 1; i < costs.size(); ++i) {
            for(int j = coins; j >= costs[i]; --j) {
                //优先选择靠前的方案
                if(dp[j - costs[i]] + 1 > dp[j]) {
                    dp[j] = dp[j - costs[i]] + 1;
                    vis[i][j] = true;
                }
            }
        }
        //cout << dp[n - 1][coins] << endl;
        vector<int> res;
        int x = n - 1;
        for(int j = coins; j >= 0 && x >= 0;) {
            if(vis[x][j]) {
                res.push_back(costs[x]);
                j -= costs[x];
                x = x - 1;
            }else {
                x = x - 1;
            }
        }
        reverse(res.begin(), res.end());

        for(int i = 0; i < res.size(); ++i) {
            cout << res[i] << " " ;
        }
        return res;
    }
};


//[10,5,6,11,2,3],10
int main() {
    Solution test;
    vector<int> costs{2,1,3,4,5};
    int coins = 10;
    vector<int> res;
    res = test.solution(costs, coins);
    return 0;
}

