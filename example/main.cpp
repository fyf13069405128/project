//360笔试
//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//    unordered_map<char, bool> dic;
//    dic['A'] = true;
//    dic['H'] = true;
//    dic['I'] = true;
//    dic['M'] = true;
//    dic['O'] = true;
//    dic['T'] = true;
//    dic['U'] = true;
//    dic['V'] = true;
//    dic['W'] = true;
//    dic['X'] = true;
//    dic['Y'] = true;
//    string s;
//    while(getline(cin, s)) {
//        int n = s.size();
//        int i;
//        for(i = 0; i <= n / 2; ++i) {
//            if(s[i] != s[n - 1 - i] || dic[s[i]] == false) {
//                break;
//            }
//        }
//        if(i <= n / 2) {
//            cout << "NO" << endl;
//        }else {
//            cout << "YES" << endl;
//        }
//    }
//    return 0;
//}


//360笔试
//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//    // int n, e;
//    // cin >> n >> e;
//    // vector<vector<int>> edges(n, vector<int>(n, INT_MAX));
//    cout << 1330 << endl;
//    int n, e, x;
//    cin >> n >> e;
//    for(int i = 0; i < e; ++i) {
//        cin >> x;
//    }
//    for(int i = 0; i < e; ++i) {
//        cin >> x;
//    }
//    vector<int> temp(e);
//    for(int i = 0; i < e; ++i) {
//        cin >> x;
//        temp[i] = x;
//    }
//    sort(temp.begin(), temp.end());
//    int sum = 0;
//    for(int i = 0; i < e - 1; ++i) {
//        sum += temp[i];
//    }
//    cout << sum << endl;
//    return 0;
//}





//华为笔试8.31
//#include <bits/stdc++.h>
//using namespace std;



//4 4
//1 1 1 1
//1 6 2 1
//1 1 0 1
//1 3 1 1
//2

//int ans = INT_MAX, temp = 0;
//int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
//vector<vector<bool>> vis;
//queue<pair<int, int>> q;
//
//
//bool judge(vector<vector<int>>& matrix, int i, int j) {
//    return i >= 0 && i < matrix.size() && j >= 0 && j < matrix[0].size();
//}
//
//
//void dfs(vector<vector<int>>& matrix, int i, int j) {
//    if(judge(matrix, i, j) == false || matrix[i][j] == 1 || vis[i][j]) return;
//    vis[i][j] = true;
//    if(matrix[i][j] == 0) {
//        temp += 1;
//        dfs(matrix, i - 1, j);
//        dfs(matrix, i + 1, j);
//        dfs(matrix, i, j - 1);
//        dfs(matrix, i, j + 1);
//        temp -= 1;
//        return;
//    }
//    if(matrix[i][j] == 3) {
//        temp += 1;
//        if(temp < ans) {
//            ans = temp;
//        }
//        temp -= 1;
//        return;
//    }
//    if(matrix[i][j] == 4) {
//        temp += 3;
//        dfs(matrix, i - 1, j);
//        dfs(matrix, i + 1, j);
//        dfs(matrix, i, j - 1);
//        dfs(matrix, i, j + 1);
//        temp -= 3;
//        return;
//    }
//    if(matrix[i][j] == 6) {
//        temp += 1;
//        for(int dir = 0; dir < 4; ++dir) {
//            int x = i + dx[dir];
//            int y = j + dy[dir];
//            if(judge(matrix, x, y) && matrix[x][y] == 1) {
//                matrix[x][y] = 0;
//                q.push(make_pair(x, y));
//            }
//        }
//        dfs(matrix, i - 1, j);
//        dfs(matrix, i + 1, j);
//        dfs(matrix, i, j - 1);
//        dfs(matrix, i, j + 1);
//        while(!q.empty()) {
//            auto [x, y] = q.front();
//            q.pop();
//            matrix[x][y] = 1;
//        }
//        temp -= 1;
//        return;
//    }
//    vis[i][j] = false;
//    return;
//}
//
//
//
//
//
//
//
//int main() {
//    int m, n;
//    cin >> m >> n;
//    vector<vector<int>> matrix(m, vector<int>(n));
//    for(int i = 0; i < m; ++i) {
//        for(int j = 0; j < n; ++j) {
//            cin >> matrix[i][j];
//        }
//    }
//
//    vector<bool> arr(n, false);
//    vis.resize(m, arr);
//    for(int i = 0; i < m; ++i) {
//        for(int j = 0; j < n; ++j) {
//            if(matrix[i][j] == 2) {
//                dfs(matrix, i - 1, j);
//                dfs(matrix, i + 1, j);
//                dfs(matrix, i, j - 1);
//                dfs(matrix, i, j + 1);
//            }
//        }
//    }
//    cout << ans;
//    return 0;
//}












//美团笔试9.3
//#include <bits/stdc++.h>
//using namespace std;
//
//
//struct TreeNode {
//    char c;
//    vector<int> children;
//}tree[50001];
//
//void preorder(TreeNode root, set<char>& st) {
//    if(root.children.size() == 0) {
//        st.insert(root.c);
//        return;
//    }
//    st.insert(root.c);
//    for(int i = 0; i < root.children.size(); ++i) {
//        preorder(tree[root.children[i]], st);
//    }
//}
//
//int main() {
//    int n, x;
//    cin >> n;
//    //TreeNode tree[n + 1];
//    for(int i = 2; i <= n; ++i) {
//        cin >> x;
//        tree[x].children.push_back(i);
//    }
//    char ch;
//    for(int i = 1; i <= n; ++i) {
//        cin >> ch;
//        tree[i].c = ch;
//    }
//    vector<int> res;
//    set<char> st;
//    for(int i = 1; i <= n; ++i) {
//        st.clear();
//        preorder(tree[i], st);
//        res.push_back(st.size());
//    }
//    for(int& num : res) {
//        cout << num << " ";
//    }
//}






//拼多多笔试9.3
//#include <bits/stdc++.h>
//using namespace std;
//
//
////struct Node {
////    char c;
////    int x;
////    Node() {};
////    Node(char _c, int _x) : c(_c), x(_x) {};
////}node[4] = {{'R', 1}, {'L', 1}, {'L', 1}, {'R', 100}};
//
//struct Node {
//    char c;
//    int x;
//    Node() {};
//    Node(char _c, int _x) : c(_c), x(_x) {};
//};
//
//int n;
//vector<int> dp(n);
//vector<Node> node(n);
//
////Node *arr = (Node*) malloc(sizeof(Node) * n);
//int *arr = (int*) malloc(sizeof(int) * n);
//
//
////Node *node = (Node*)malloc(sizeof(Node) * n);
//
////以下报错是因为c++全局变量不能赋值
////node[0] = Node('L', 1);
////node[1] = Node('L', 1);
////node[2] = Node('R', 1);
////node[3] = Node('R', 100);
//
//
//
//
//
//
//void jump(int i) {
//    unordered_set<int> st;
//    int ans = 0;
//    int pos = i;
//    while(true) {
//        Node cur = node[pos];
//        st.insert(i);
//        if(cur.c == 'L') {
//            pos -= cur.x;
//        }else {
//            pos += cur.x;
//        }
//        ans++;
//        if(pos < 0 || pos >= n) {
//            dp[i] = ans;
//            break;
//        }else if(dp[pos] == -1 || st.find(pos) != st.end()) {
//            dp[i] = -1;
//            break;
//        }
//    }
//}
//
//int main() {
//    cin >> n;
//    node[0] = Node('L', 1);
//    node[1] = Node('L', 1);
//    node[2] = Node('R', 1);
//    arr[0] = 1;
//    arr[1] = 2;
//    arr[2] = 3;
//    for(int i = 0; i < n; ++i) {
//        jump(i);
//    }
//    for(int i = 0; i < n; ++i) {
//        cout << dp[i] << " ";
//    }
//    cout << endl;
//    cout << "arr[n - 1] is : " << arr[n - 1];
//}




//京东笔试9.3
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n = 2;
//    vector<int> nums = {2, 6};
//    vector<int> dp(10001, 60000);
//    dp[1] = 0;
//    dp[2] = 1;
//    for(int i = 3; i <= 10000; ++i) {
//        for(int j = 2; j < i;++j) {
//            if(i % j == 0) {
//                int x = i / j;
//                dp[i] = min(dp[i], dp[j] + dp[x] + 1);
//            }
//        }
//        dp[i] = min(dp[i], dp[i - 1] + 1);
//    }
//    int ans = 0;
//    for(int num : nums) {
//        ans += dp[num];
//    }
//    cout << ans << endl;
//    return 0;
//}

























//网易笔试9.4
//#include <bits/stdc++.h>
//using namespace std;
//int main () {
//    int n, k;
//    unordered_map<int, int> dic;
//    int ans = 0;
//    cin >> n >> k;
//    vector<int> nums;
//    int x;
//    for(int i = 0; i < n; ++i) {
//        cin >> x;
//        nums.push_back(x);
//    }
//    for(int num : nums) {
//        int j;
//        for(j = num; j - k > 0;) {
//            j -= k;
//        }
//        dic[j]++;
//        ans = max(ans, dic[j]);
//    }
//    cout << ans << endl;
//    return 0;
//}


//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//    int n, k, t;
//    cin >> n >> k >> t;
//    string res;
//    if(t < k + 1) {
//        cout << -1 << endl;
//    }else if(t == k + 1) {
//        for(int i = 0; i < n; ++i) {
//            if(i < k) {
//                res += "1";
//            }else {
//                res += "0";
//            }
//        }
//        cout << res << endl;
//    }
//    return 0;
//}


//此题超时，不应该用sort，直接遍历取最大值max
//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//    int n, k, x;
//    cin >> n >> k >> x;
//    int num;
//    vector<int> nums;
//    for(int i = 0; i < n; ++i) {
//        cin >> num;
//        nums.push_back(num);
//    }
//    for(int i = 0; i < k; ++i) {
//        sort(nums.begin(), nums.end());
//        reverse(nums.begin(), nums.end());
//        nums[0] -= x;
//    }
//    sort(nums.begin(), nums.end());
//    reverse(nums.begin(), nums.end());
//    cout << nums[0] << endl;
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//    int n, k, x;
//    cin >> n >> k >> x;
//    int num;
//    vector<int> nums;
//    for(int i = 0; i < n; ++i) {
//        cin >> num;
//        nums.push_back(num);
//    }
//    for(int i = 0; i < k; ++i) {
//        int temp = INT_MIN;
//        int p = -1;
//        for(int j = 0; j < n; ++j) {
//            if(nums[j] > temp) {
//                temp = nums[j];
//                p = j;
//            }
//        }
//        nums[p] -= x;
//    }
//    int ans = 0;
//    for(int i = 0; i < n; ++i) {
//        ans = max(ans, nums[i]);
//    }
//    cout << ans;
//    return 0;
//}



//又是数组形式的树，但是最后超时，一个用例都没过
//计算一个数据的因子数量的时间复杂度过高
//long long 改为  int 倒是不超时，但是用例过不了
//#include <bits/stdc++.h>
//using namespace std;
//
//struct TreeNode {
//    int weight;
//    vector<int> children;
//};
//
//void postorder(vector<TreeNode>& tree, int root, vector<long long>& temp) {
//    if(tree[root].children.size() == 0) {
//        temp[root] = tree[root].weight;
//    }
//    for(int i = 0; i < tree[root].children.size(); ++i) {
//        postorder(tree, tree[root].children[i], temp);
//    }
//    for(int i = 0; i < tree[root].children.size(); ++i) {
//        temp[root] *= temp[tree[root].children[i]];
//    }
//}
//
//int main() {
//    int n;
//    cin >> n;
//    vector<TreeNode> tree(n + 1);
//    int x;
//    for(int i = 1; i <= n; ++i) {
//        cin >> x;
//        tree[i].weight = x;
//    }
//    int a, b;
//    for(int i = 0; i < n - 1; ++i) {
//        cin >> a >> b;
//        tree[a].children.push_back(b);
//    }
//    vector<long long> temp(n + 1);
//    for(int i = 1; i <= n; ++i) {
//        temp[i] = tree[i].weight;
//    }
//    postorder(tree, 1, temp);
//    //unordered_map<int, int> dic;
//    int ans = 0;
//    int MOD = 1000000000 + 7;
//    for(int i = 1; i <= n; ++i) {
//        //cout << temp[i] << endl;
//        long long count = 0;
//        for(long long j = 1; j * j <= temp[i]; ++j) {
//            if(temp[i] % j == 0) {
//                if(j * j == temp[i]) {
//                    count++;
//                }else {
//                    count += 2;
//                }
//            }
//        }
//        int mod = count % MOD;
//        ans += mod;
//    }
//    cout << ans << endl;
//    return 0;
//}








//华为笔试，9.7号

//3
//1
//0 1 2
//0 1
//
//1
//
//
//5
//2
//0 1 2
//1 3 4
//2 4
//
//3
//
//
//5
//2
//0 2
//1 3 4
//2 4
//
//-1









//#include <bits/stdc++.h>
//using namespace std;
//
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    vector<int> nums(n, -1);
//    for(int i = 0; i < m; ++i) {
//        int parent;
//        cin >> parent;
//        int child;
//        while(cin >> child) {
//            char c = getchar();
//            nums[child] = parent;
//            if(c == '\n') break;
//        }
//    }
//    int m1, m2;
//    cin >> m1 >> m2;
//    vector<int> temp1, temp2;
//    temp1.push_back(m1);
//    for(int i = m1; nums[i] != -1;) {
//        temp1.push_back(nums[i]);
//        i = nums[i];
//    }
//    temp2.push_back(m2);
//    for(int i = m2; nums[i] != -1;) {
//        temp2.push_back(nums[i]);
//        i = nums[i];
//    }
//    int i = temp1.size() - 1, j = temp2.size() - 1;
//    if(temp1[i] != temp2[j]) {
//        cout << -1 << endl;
//        return 0;
//    }
//    while(i >= 0 && j >= 0 && temp1[i] == temp2[j]) {
//        i--;
//        j--;
//    }
//    cout << i + j + 2 << endl;
//    return 0;
//}














//6 6
//SBBBBB
//BXXXXB
//BBXBBB
//XBBXXB
//BXBBXB
//BBXBEB
//
//13



//#include <bits/stdc++.h>
//using namespace std;
//
//// we have defined the necessary header files here for this problem.
//// If additional header files are needed in your program, please import here.
//
//int ans = 10000;
//int temp = 0;
//
//int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
//
//void backtrack(vector<vector<char>>& matrix,vector<vector<bool>>& vis, int i, int j, int k);
//
//int main()
//{
//    // please define the C++ input here. For example: int a,b; cin>>a>>b;;
//    // please finish the function body here.
//    // please define the C++ output here. For example:cout<<____<<endl;
//    int m, n;
//    cin >> m >> n;
//    vector<vector<char>> matrix(m, vector<char>(n));
//    vector<vector<bool>> vis(m, vector<bool>(n, false));
//    char c;
//    for(int i = 0; i < m; ++i) {
//        for(int j = 0; j < n; ++j) {
//            cin >> c;
//            matrix[i][j] = c;
//        }
//    }
//    for(int i = 0; i < m; ++i) {
//        for(int j = 0; j < n; ++j) {
//            if(matrix[i][j] == 'S') {
//                backtrack(matrix, vis, i, j, 0);
//            }
//        }
//    }
//    cout << ans << endl;
//    return 0;
//}
//
//void backtrack(vector<vector<char>>& matrix, vector<vector<bool>>& vis, int i, int j, int k) {
//    if(i < 0 || i >= matrix.size() || j < 0 || j >= matrix[0].size() || vis[i][j] || matrix[i][j] == 'X') return;
//    if(matrix[i][j] == 'E') {
//        ans = min(ans, temp + 1);
//        return;
//    }
//    if(matrix[i][j] == 'B') {
//        temp++;
//        vis[i][j] = true;
//        for(int dir = 0; dir < 4; ++dir) {
//            if(dir != k) temp++;
//            int x = i + dx[dir];
//            int y = j + dy[dir];
//            backtrack(matrix, vis, x, y, dir);
//            if(dir != k) temp--;
//        }
//        temp--;
//        vis[i][j] = false;
//    }
//    if(matrix[i][j] == 'S') {
//        vis[i][j] = true;
//        for(int dir = 0; dir < 4; ++dir) {
//            int x = i + dx[dir];
//            int y = j + dy[dir];
//            backtrack(matrix, vis, x, y, dir);
//        }
//        vis[i][j] = false;
//    }
//}



//8 15 8 1
//1 2 2 1 2 2 1 2 2 1 2 2 1 2 1
//0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//1 2 1 2 1 0 1 3 2 2 2 1 2 2 2
//1 2 1 2 2 0 1 3 1 2 1 2 1 2 1
//0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//2 1 2 2 2 0 2 2 1 1 0 1 2 1 2
//2 2 2 2 2 0 2 2 2 2 0 2 2 2 2
//0 0 0 0 0 0 0 0 0 0 0 0 0 0 0




//#include <bits/stdc++.h>
//using namespace std;
//
//struct Node {
//    int x;
//    int y;
//    int step;
//    pair<int, int> prev;
//    Node() {};
//    Node(int _x, int _y, int _step) : x(_x), y(_y), step(_step) {};
//};
//
////题目做法不严谨，题目中对相同距离的车位以及相同车位的路径都有要求
//int main() {
//    int m, n;
//    cin >> m >> n;
//    int a, b;
//    cin >> a >> b;
//    vector<vector<int>> matrix(m, vector<int>(n));
//    vector<vector<Node>> node(m, vector<Node>(n));
//    for(int i = 0; i < m; ++i) {
//        for(int j = 0; j < n; ++j) {
//            cin >> matrix[i][j];
//        }
//    }
//    queue<Node> q;
//    vector<vector<bool>> vis(m, vector<bool>(n));
//    node[a - 1][b - 1] = Node(a - 1, b - 1, 0);
//    q.push(node[a - 1][b - 1]);
//    vis[a - 1][b - 1] = true;
//    int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
//    while(!q.empty()) {
//        vector<pair<int, int>> res;
//        Node front = q.front();
//        q.pop();
//        for(int dir = 0; dir < 4; ++dir) {
//            int x = front.x + dx[dir];
//            int y = front.y + dy[dir];
//            if(x < 0 || x >= m || y < 0 || y >= n || vis[x][y] || matrix[x][y] == 2 || matrix[x][y] == 3) {
//                continue;
//            }
//            if(matrix[x][y] == 0) {
//                node[x][y] = Node(x, y, front.step + 1);
//                node[x][y].prev = make_pair(front.x, front.y);
//                q.push(node[x][y]);
//                vis[x][y] = true;
//            }
//            if(matrix[x][y] == 1) {
//                node[x][y] = Node(x, y, front.step + 1);
//                node[x][y].prev = make_pair(front.x, front.y);
//                pair<int, int> tmp = make_pair(x, y);
//                while(tmp.first != a - 1 || tmp.second != b - 1) {
//                    res.push_back(tmp);
//                    tmp = node[tmp.first][tmp.second].prev;
//                }
//                res.push_back(tmp);
//                reverse(res.begin(), res.end());
//                for(auto temp : res) {
//                    cout << "[" << temp.first << " " << temp.second << "]" << endl;
//                }
//                break;
//            }
//        }
//        if(!res.empty()) {
//            break;
//        }
//    }
//    if(q.empty()) {             //通过q.empty()不合理，因为可能正好处理到最后一个结点出队找到路径
//        cout << -1 << endl;
//    }
//    return 0;
//}







//intel笔试，9.9号

//#include <bits/stdc++.h>
//#include <bitset>
//using namespace std;
//
//void func(vector<uint32_t>& nums, int count) {
//    for(int i = 0; i < count; ++i) {
//        uint32_t x = nums[i];
//        uint32_t x1 = (x & (0x000000FF)) << 24;
//        uint32_t x2 = (x & (0x0000FF00)) << 8;
//        uint32_t x3 = (x & (0x00FF0000)) >> 8;
//        uint32_t x4 = (x & (0xFF000000)) >> 24;
//        nums[i] = x1 | x2 | x3 | x4;
//    }
//}
//
//int main() {
//    vector<uint32_t> nums;
//    nums.push_back(0x00112233);
//    nums.push_back(0x44556677);
//    int count = 2;
//    func(nums, count);
//    for(uint32_t num : nums) {
//        cout <<bitset<32>(num) << endl;
//        cout << hex << num << endl;
//    }
//    return 0;
//}









//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    vector<int> nums(n + 2);
//    int x;
//    nums[0] = INT_MAX;
//    nums[n + 1] = INT_MAX;
//    for(int i = 1; i <= n; ++i) {
//        cin >> x;
//        nums[i] = x;
//    }
//    int ans = 0;
//    for(int k = 1; k <= n; ++k) {
//        int i, j, temp = nums[k];
//        for(i = k + 1; i < n + 2; ++i) {
//            if(nums[i] >= temp) {
//                break;
//            }else {
//                temp = nums[i];
//            }
//        }
//        temp = nums[k];
//        for(j = k - 1; j >= 0; --j) {
//            if(nums[j] >= temp) {
//                break;
//            }else {
//                temp = nums[j];
//            }
//        }
//        //cout << i << " " << j << " " << i - j - 1 << endl;
//        ans = max(ans, i - j - 1);
//    }
//    cout << ans << endl;
//    return 0;
//}



//#include <bits/stdc++.h>
//using namespace std;
//
//struct Edge {
//    int u, v, cost;
//};
//
//void init(vector<int>& parent, vector<int>& size, int k) {
//    for(int i = 1; i <= k; ++i) {
//        parent[i] = i;
//        size[i] = 1;
//    }
//}
//
//int find(vector<int>& parent, int k) {
//    if(k != parent[k]) {
//        parent[k] = find(parent, parent[k]);
//    }
//    return parent[k];
//}
//
//int union_set(vector<int>& parent, vector<int>& size, vector<Edge>& edge, int k) {
//    int p = find(parent, edge[k].u);
//    int q = find(parent, edge[k].v);
//    if(p == q) return 0;
//    if(size[p] > size[q]) {
//        parent[q] = p;
//        size[p] += size[q];
//    }else {
//        parent[p] = q;
//        size[q] = p;
//    }
//    return 1;
//}
//
//void kruskal(vector<int>& parent, vector<int>& size, vector<Edge>& edge, vector<int>& flag, int v, int e) {
//    init(parent, size, v);
//    int count = 0;
//    for(int i = 0; i < e && count < v; ++i) {
//        if(union_set(parent, size, edge, i) == 0) continue;
//        flag[count++] = i;
//    }
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    vector<int> parent(n + 1);
//    vector<int> size(n + 1);
//    vector<int> flag(n + 1);
//    vector<Edge> edge(m);
//    int x;
//    for(int i = 0; i < m; ++i) {
//        cin >> x;
//        edge[i].u = x;
//    }
//    for(int i = 0; i < m; ++i) {
//        cin >> x;
//        edge[i].v = x;
//    }
//    for(int i = 0; i < m; ++i) {
//        cin >> x;
//        edge[i].cost = x;
//    }
//    sort(edge.begin(), edge.end(), [](Edge e1, Edge e2) {
//        return e1.cost < e2.cost;
//    });
//    kruskal(parent, size, edge, flag, n, m);
//    int ans = 0;
//    for(int num : flag) {
//        ans += edge[num].cost;
//    }
//    cout << ans << endl;
//    return 0;
//}





//美团笔试，9.10

//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//    int t, n, x, y, k;
//    cin >> t;
//    vector<string> res;
//    for(int i = 0; i < t; ++i) {
//        cin >> n >> x >> y >> k;
//        int temp1 = k, temp2 = n - k + 1;
//        double a = temp1 * 1.0 / x, b = temp2 * 1.0 / y;
//        if(a < b) {
//            //cout << "Win" << endl;
//            res.push_back("Win");
//        }else if(a > b) {
//            //cout << "Lose" << endl;
//            res.push_back("Lose");
//        }else {
//            //cout << "Trie" << endl;
//            res.push_back("Trie");
//        }
//    }
//    for(string& s : res) {
//        cout << s << endl;
//    }
//    return 0;
//}



//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    vector<int> nums(n);
//    int x, sum = 0, count = 0;
//    for(int i = 0; i < n; ++i) {
//        cin >> x;
//        nums[i] = x;
//        sum += x;
//        if(x == 0) count++;
//    }
//    if(sum + count != 0) {
//        cout << count << endl;
//    }else {
//        cout << count + 1 << endl;
//    }
//    return 0;
//}



//#include <bits/stdc++.h>
//using namespace std;
//
//
//
//void dfs(unordered_map<int, vector<int>>& dic, int maxNum, int curNum, int& ans, int temp) {
//    if(curNum > maxNum) {
//        ans = max(ans, temp);
//        return;
//    }
//    int val = 0;
//    if(dic.find(curNum) != dic.end()) {
//        for(int i = 0; i < dic[curNum].size(); ++i) {
//            val += dic[curNum][i];
//        }
//    }
//    dfs(dic, maxNum, curNum * 2, ans, temp + val);
//    dfs(dic, maxNum, curNum * 2 + 1, ans, temp + val);
//}
//
//int main() {
//    int n;
//    cin >> n;
//    unordered_map<int, vector<int>> dic;
//    vector<int> v(n);
//    int x, maxNum = INT_MIN;
//    for(int i = 0; i < n; ++i) {
//        cin >> x;
//        v[i] = x;
//        maxNum = max(maxNum, x);
//    }
//    for(int i = 0; i < n; ++i) {
//        cin >> x;
//        dic[v[i]].push_back(x);
//    }
////    for(auto it = dic.begin(); it != dic.end(); ++it) {
////        cout << it->first << "   ";
////        for(int i = 0; i < it->second.size(); ++i) {
////            cout << it->second[i] << " ";
////        }
////        cout << endl;
////    }
//    int ans = INT_MIN;
//    dfs(dic, maxNum, 1, ans, 0);
//    cout << ans << endl;
//    return 0;
//}





//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    vector<int> nums(n);
//    int x;
//    for(int i = 0; i < n; ++i) {
//        cin >> x;
//        nums[i] = x;
//    }
//    vector<int> dp(m, INT_MAX);
//    for(int i = 0; i < m; ++i) {
//        if(i == 0) dp[i] = 0;
//        else dp[i] = m - i;
//    }
//    for(int i = 0; i < m; ++i) {
//        for(int j = 1; j < 10; ++j) {
//            int temp = (int)pow(10.0, j);
//            int mod = (i + temp) % m;
//            dp[i] = min(dp[i], dp[mod] + 1);
//        }
//    }
//    vector<int> res(n, INT_MAX);
//    for(int i = 0; i < n; ++i) {
//        if(nums[i] < m) {
//            res[i] = dp[nums[i]];
//            continue;
//        }
//        for(int j = 0; j < 10; ++j) {
//            int temp = (int)pow(10.0, j);
//            int mod = (nums[i] + temp) % m;
//            res[i] = min(res[i], dp[mod]);
//        }
//    }
//    for(int ans : res) {
//        cout << ans << " ";
//    }
//    return 0;
//}


//微众银行笔试

//#include <bits/stdc++.h>
//using namespace std;
//
//int func(int a, int b) {
//    if(a == b) return 0;
//    int count = 0;
//    if(a > b) {
//        while(a > b) {
//            if((a & 1) == 1) return -1;
//            a = a >> 1;
//            if(a < b) return -1;
//            count++;
//            if(a == b) break;
//        }
//    }
//    if(a < b) {
//        while(a < b) {
//            a = a << 1;
//            if(a > b) return -1;
//            count++;
//            if(a == b) break;
//        }
//    }
//    int ans = 0;
//    while(true) {
//        if(count == 0) {
//            break;
//        }else if(count % 3 == 0) {
//            count -= 3;
//            ans++;
//            continue;
//        }else if(count % 2 == 0) {
//            count -= 2;
//            ans++;
//            continue;
//        }else{
//            ans++;
//            break;
//        }
//    }
//    return ans;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    vector<pair<int, int>> nums;
//    int x, y;
//    for(int i = 0; i < n; ++i) {
//        cin >> x >> y;
//        nums.push_back(make_pair(x, y));
//    }
//    vector<int> res;
//    for(auto& temp : nums) {
//        res.push_back(func(temp.first, temp.second));
//    }
//    for(int num : res) {
//        cout << num << endl;
//    }
//    return 0;
//}








//9.20 思科
//7 1
////3 6 1 7 2 5 4
////输出：BBAAABA
//
////10 2
////4 8 9 10 7 6 5 3 2 1
////输出：BAAAAABBBA
//
//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m;
//unordered_map<int, bool> dic;
//vector<int> nums;
//vector<char> res;
//
//void selectPlayer(char ch) {
//    int pos = -1, x = INT_MIN;
//    for(int i = 0; i < n; ++i) {
//        if(nums[i] > x && dic[i] == false) {
//            pos = i;
//            x = nums[i];
//        }
//    }
//    if(pos == -1) return;
//    dic[pos] = true;
//    res[pos] = ch;
//    int a = 0, b = 0;
//    int i = 1;
//    while (pos + i < n && a < m) {
//        if (pos + i < n && dic[pos + i] == false) {
//            dic[pos + i] = true;
//            res[pos + i] = ch;
//            a++;
//        }
//        i++;
//    }
//    i = 1;
//    while (pos - i >= 0 && b < m) {
//        if (pos - i >= 0 && dic[pos - i] == false) {
//            dic[pos - i] = true;
//            res[pos - i] = ch;
//            b++;
//        }
//        i++;
//    }
//}
//
//int main() {
//    cin >> n >> m;
//    nums.resize(n);
//    res.resize(n);
//    for(int i = 0; i < n; ++i) {
//        cin >> nums[i];
//    }
//    int count = 1;
//    while(true) {
//        int num = 0;
//        for(int i = 0; i < n; ++i) {
//            if(dic[i]) num++;
//        }
//        if(num == n) break;
//        if(count % 2 == 1) {
//            selectPlayer('A');
//        }else {
//            selectPlayer('B');
//        }
//        count++;
//    }
//    for(char temp : res) {
//        cout << temp;
//    }
//    return 0;
//}









////华为笔试第三题，实为bfs求最短路径，并输出路径，注意一下这种输出路径的方式
//#include <bits/stdc++.h>
//using namespace std;
//
//struct Node {
//    int x, y, t;
//    pair<int, int> prev;
//    Node() {};
//    Node(int a, int b, int c) : x(a), y(b), t(c) {};
//};
//
//int dx[4] = {-1, 1, 0, 0};
//int dy[4] = {0, 0, -1, 1};
//
//int main() {
//    int m, n;
//    cin >> m >> n;
//    int a, b;
//    cin >> a >> b;
//    vector<vector<int>> matrix(m, vector<int>(n));
//    vector<vector<Node>> node(m, vector<Node>(n));
//    vector<vector<bool>> vis(m, vector<bool>(n, false));
//    for(int i = 0; i < m; ++i) {
//        for(int j = 0; j < n; ++j) {
//            cin >> matrix[i][j];
//        }
//    }
//    node[a - 1][b - 1] = Node(a - 1, b - 1, 0);
//    queue<Node> q;
//    q.push(node[a - 1][b - 1]);
//    vis[a - 1][b - 1] = true;
//    vector<pair<int, int>> res;  //res定义为全局变量，以防正好队列最后一个元素出队时才第一次找到空车位
//    while(!q.empty()) {
//        Node front = q.front();
//        q.pop();     //bfs每次记得出队
//        for(int dir = 0; dir < 4; ++dir) {
//            int x = front.x + dx[dir];
//            int y = front.y + dy[dir];
//            if(x < 0 || x >= m || y < 0 || y >= n || vis[x][y] || matrix[x][y] == 2 || matrix[x][y] == 3) {
//                continue;
//            }
//            if(matrix[x][y] == 0) {
//                node[x][y] = Node(x, y, front.t + 1);
//                node[x][y].prev = make_pair(front.x, front.y);
//                q.push(node[x][y]);
//                vis[x][y] = true;
//            }
//            if(matrix[x][y] == 1) {
//                node[x][y] = Node(x, y, front.t + 1);
//                node[x][y].prev = make_pair(front.x, front.y);
//                pair<int, int> temp = make_pair(x, y);
//                while(temp.first != a - 1 || temp.second != b - 1) {
//                    res.push_back(temp);
//                    temp = node[temp.first][temp.second].prev;
//                }
//                res.push_back(temp);
//                reverse(res.begin(), res.end());
//                for(auto& tmp : res) {
//                    cout << "[" << tmp.first << " " << tmp.second << "]" << endl;
//                }
//                break;
//            }
//        }
//        if(!res.empty()) {
//            break;
//        }
//    }
//    if(q.empty() && res.empty()) {  //只通过队列为空判断是否有空车位不严谨，例如队列最后一个元素出队时才第一次找到空车位
//        cout << -1 << endl;
//    }
//    return 0;
//}





//#include <bits/stdc++.h>
//using namespace std;
//
//struct Node {
//    int x, y, t, d;
//    Node() {};
//    Node(int a, int b, int c, int e) : x(a), y(b), t(c), d(e) {};
//    bool operator<(const Node& tmp) const{
//        return t > tmp.t;
//    }
//};
//
//int dx[4] = {-1, 1, 0, 0};
//int dy[4] = {0, 0, -1, 1};
//
//int main() {
//    int m, n;
//    cin >> m >> n;
//    vector<vector<char>> matrix(m, vector<char>(n));
//    vector<
//}








//9.22华为一面算法题

//输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。
//例如输入前序遍历序列{1，2,4,7,3,5,6,8}和中序遍历序列{4，7,2,1,5,3,8,6}，则重建出二叉树并输出它的头结点。二叉树节点的定义如下：


//struct BinaryTreeNode {
//    int m_nValue;
//    BinaryTreeNode m_pLeft;
//    BinaryTreeNode m_pRight;
//};


//#include <bits/stdc++.h>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() {};
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
//};
//
//unordered_map<int, int> dic;
//
//TreeNode* func (vector<int>& preorder, int root, int left, int right) {
//    if(left > right) return nullptr;
//    TreeNode *node = new TreeNode(preorder[root]);
//    int mid = dic[preorder[root]];
//    node->left = func(preorder, root + 1, left, mid - 1);
//    node->right = func(preorder, root + mid - left + 1, mid + 1, right);
//    return node;
//}
//
//TreeNode* buildBinaryTree(vector<int>& preorder, vector<int>& inorder) {
//    int n = inorder.size();
//    for(int i = 0; i < n; ++i) {
//        dic[inorder[i]] = i;
//    }
//    return func(preorder, 0, 0, n - 1);
//}
//
//void pre_order(vector<int>& res, TreeNode* root) {
//    if(!root) return;
//    res.push_back(root->val);
//    pre_order(res, root->left);
//    pre_order(res, root->right);
//}
//
//
//int main() {
//    vector<int> preorder = {1,2,4,7,3,5,6,8};
//    vector<int> inorder = {4,7,2,1,5,3,8,6};
//    TreeNode *root = buildBinaryTree(preorder, inorder);
//    vector<int> res;
//    pre_order(res, root);
//    for(int num : res) {
//        cout << num << " ";
//    }
//    return 0;
//}






//9.22华为二面算法题

////给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。（要求只遍历一次链表）
//
//
//#include <bits/stdc++.h>
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode() {};
//    ListNode(int x) : val(x), next(nullptr) {};
//};
//
//ListNode* deleteLastN(ListNode* head, int n) {
//    ListNode *dummyHead = new ListNode(0);
//    dummyHead->next = head;
//    ListNode *fast = dummyHead, *slow = dummyHead;
//    while(fast) {
//        if(n-- < 0) slow = slow->next;
//        fast = fast->next;
//    }
//    slow->next = slow->next->next;
//    return dummyHead->next;
//}
//
//int main() {
//    ListNode *node1 = new ListNode(1);
//    ListNode *node2 = new ListNode(2);
//    ListNode *node3 = new ListNode(3);
//    ListNode *node4 = new ListNode(4);
//    node1->next = node2;
//    node2->next = node3;
//    node3->next = node4;
//    node4->next = nullptr;
//    int n = 2;
//    ListNode *newHead = deleteLastN(node1, n);   //输入1->2->3->4->nullptr，n = 2；
//    ListNode *cur = newHead;
//    while(cur) {
//        cout << cur->val << " ";
//        cur = cur->next;
//    }
//    return 0;
//}


//10.10 Unity三面算法题
////01213
////0,121,3
////
////01231214
////0,123121,4
////
////
////0122123
////0, 12212,3
//
//#include <bits/stdc++.h>
//using namespace std;
//
//void func(string s) {
//    int start[10], end[10];
//    for(int i = 0; i < 10; ++i) {
//        start[i] = -1;
//        end[i] = -1;
//    }
//    int n = s.size();
//    for(int i = 0; i < n; ++i) {
//        if(start[s[i] - '0'] == -1) {
//            start[s[i] - '0'] = i;
//        }
//        if(end[s[n - 1 - i] - '0'] == -1) {
//            end[s[n - 1 - i] - '0'] = n - 1 - i;
//        }
//    }
//    int i = 0;
//    for(int j = 0; j < n;) {
//        int k = end[s[j] - '0'];
//        for(int x = j; x <= k; ++x) {
//            k = max(k, end[s[x] - '0']);
//        }
//        cout << s.substr(j, k - j + 1) << endl;
//        j = k + 1;
//    }
//}
//
//int main() {
//    string s;
//    cin >> s;
//    func(s);
//    return 0;
//}














