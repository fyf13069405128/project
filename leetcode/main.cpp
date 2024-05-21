//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <string>
//#include <queue>
//#include <math.h>
//#include <map>
//#include <algorithm>
//#include <bitset>
#include <bits/stdc++.h>
using namespace std;

//class Solution {
//public :
//     int findRepeatNumber(vector<int>& nums) {
//        int a[100000];
//        for(int i=0;i<nums.size();i++) {
//            if(a[nums[i]]!=0) return nums[i];
//            else a[nums[i]]++;
//        }
//        return -1;
//    }
//};
//
//int main() {
//    vector<int> v={3,4,2,0,0,1};  //vector的初始化问题
//    int ans=(new Solution())->findRepeatNumber(v);
//    cout << ans << endl;
//    return 0;
//}

//map的值value的初始值问题
//int main() {
//    unordered_map<int,string> map;
//    cout << map[5] << endl;
//    cout << false << endl;
//    return 0;
//}

//int main() {
//    //二维vector的访问
//    vector<vector<int>> v={{1,2},{3,4}};
//    vector<int> a={1,2,3};
//    //cout << a << endl;语法错误
//    cout << v[1][1] << endl;
//    return 0;
//}


//string的 size 和 length 方法
//int main() {
//    string s="123456789";
//    cout << s.length() << endl;
//    cout << s.size() << endl;
//    return 0;
//}


//string的resize用法
//int main ()
//{
//    std::string str ("I like to code in C");
//    std::cout << str << '\n';
//
//    unsigned sz = str.size();
//
//    str.resize (sz+2,'+');
//    std::cout << str << '\n';
//
//    str.resize (14);
//    std::cout << str << '\n';
//    return 0;
//}

//string 的  + 号拼接，后接字符
//int main() {
//   string s="123";
//   cout << s << endl;
//   s=s+'4';
//   cout << s << endl;
//}


////pair make_pair()
//int main() {
//    queue<pair<int,int>> q;
//    q.push(make_pair(0,0));
//    auto f=q.front();
//    cout << f.first << "  " << f.second << endl;
//    auto [x,y]=q.front();
//    cout << x << "  " << y << endl;
//    return 0;
//}

////移位运算符
//int main() {
//    for(int i=1;i<5;i++) {
//        int x=1<<i;
//        cout << x << endl;
//    }
//    return 0;
//}


//math的pow函数
//int main() {
//    int x=pow(2.0,6);
//    cout << x << endl;
//    return 0;
//}

//负数左移，lc上c++的负数不能左移
//class Solution {
//public:
//    int add(int a, int b) {
//        int ans=b;
//        while(a!=0) {
//            ans=a^b;
//            a=a&b;
//            b=ans;
//            a=a<<1;
//        }
//        return ans;
//    }
//};
//
//int main() {
//    int a=-1,b=-2;
//    int sum=(new Solution())->add(a,b);
//    cout << sum << endl;
//    return 0;
//}

//c++中这样写不会出现空指针异常，java中会出现空指针异常
//int main() {
//    string s;
//    if(s.empty()) cout<<"s is empty."<<endl;
//    return 0;
//}


//map的插入顺序问题
//int main() {
//    unordered_map<int,int> m;
//    m[3]=1;
//    m[1]=3;
//    m[2]=2;
//    for(auto it=m.begin();it!=m.end();it++) {
//        cout<<it->first<<":"<<it->second<<endl;
//    }
//    return 0;
//}

//dp[n]定义数组
//class Solution {
//public:
//    int nthUglyNumber(int n) {
//        int a = 0, b = 0, c = 0;
//        int dp[n];
//        dp[0] = 1;
//        for(int i = 1; i < n; i++) {
//            int n2 = dp[a] * 2, n3 = dp[b] * 3, n5 = dp[c] * 5;
//            dp[i] = min(min(n2, n3), n5);
//            if(dp[i] == n2) a++;
//            if(dp[i] == n3) b++;
//            if(dp[i] == n5) c++;
//        }
//        return dp[n - 1];
//    }
//};
//
//int main() {
//    int n=10;
//    int ans=(new Solution())->nthUglyNumber(n);
//    cout << ans << endl;
//    return 0;
//}

//m[i]=a与m.insert(pair<char,int>(i,a))的区别
//int main() {
//    map<char,int> m;
//    m['c']=2;
//    m.insert(pair<char,int>('c',3));
//    cout << m['c'] << endl;
//    for(auto it=m.begin();it!=m.end();it++) {
//        cout << it->first << ":" << it->second << endl;
//    }
//    return 0;
//}

//to_string将int转换为string类型
//int main() {
//    int n=123456789;
//    string s= to_string(n);
//    cout << s << endl;
//    return 0;
//}

//字符串比较大小
//int main() {
//    string a="122",b="121";
//    if(a<b) return 1;
//    return 0;
//}

//字符串的substr(i，len)方法，i起始位置，len长度
//int main() {
//    string s="0123456789";
//    string temp=s.substr(3,3);
//    cout << temp << endl;
//    return 0;
//}

//  -1/2
//int main() {
//    int a=-1/2,b=-3/2;
//    cout << a << " " << b << endl;
//    a=(-1)/2,b=(-3)/2;
//    cout << a << " " << b << endl;
//    return 0;
//}

//回溯
//class Solution {
//public:
//    vector<string> rec;
//    vector<int> vis;
//
//    void backtrack(const string& s, int i, int n, string& perm) {
//        if (i == n) {
//            rec.push_back(perm);
//            return;
//        }
//        for (int j = 0; j < n; j++) {
//            if (vis[j] || (j > 0 && !vis[j - 1] && s[j - 1] == s[j])) {
//                continue;
//            }
//            vis[j] = true;
//            perm.push_back(s[j]);
//            cout << perm << endl;
//            backtrack(s, i + 1, n, perm);
//            perm.pop_back();
//            cout << perm << endl;
//            vis[j] = false;
//        }
//    }
//
//    vector<string> permutation(string s) {
//        int n = s.size();
//        vis.resize(n);
//        sort(s.begin(), s.end());
//        string perm;
//        backtrack(s, 0, n, perm);
//        return rec;
//    }
//};
//
//int main() {
//    string s="abc";
//    vector<string> res=(new Solution())->permutation(s);
//    for(string x : res) {
//        cout << x << ":";
//    }
//    return 0;
//}

// c++的下一个排列函数：next_permutation()
//int main() {
//    string s="abbcd";
//    do {
//        cout << s << endl;
//    }while(next_permutation(s.begin(),s.end()));
//    return 0;
//}

//指针类型的初始值，结构体类型的初始值
//struct Node {
//    int val;
//    struct Node* left;
//    struct Node* right;
//    Node(int x) : val(x),left(nullptr),right(nullptr) {}
//};
//int main() {
//    //Node* node;
//    Node* node=new Node(5);
//    //node= nullptr;
//    cout << node << endl;
//    node->val=10;
//    node->left= nullptr;
//    node->right= nullptr;
//    cout << node->val << endl;
//    cout << node->left << endl;
//    cout << node->right << endl;
//    return 0;
//}

//unordered_map 和 map
//int main() {
//    //unordered_map<int,int> dic;
//    map<int,int> dic;
//    dic[2]=3;
//    dic[1]=2;
//    dic[3]=1;
//    for(auto it = dic.begin(); it != dic.end(); it++) {
//        cout << it->first << "    " << it->second << endl;
//    }
//    return 0;
//}

//排序函数参数需不需要加 & 符号，也不需要加 static，但是leetcode上面必须加static 修饰
//bool cmp(int x, int y) {
//    return x < y;
//}
//int main() {
//    int a[5] = {5, 4, 3, 2, 1};
//    sort(a,a + 5,cmp);
//    for(int x : a) {
//        cout << x << endl;
//    }
//    return 0;
//}

//负数的与运算
//int main() {
//    //int a = -1, b = 1 << 30;
//    int a = -1, b = - ((int)pow(2, 31) - 1);
//    cout << bitset<32>(a) << endl;
//    cout << bitset<32>(b) << endl;
//    int c = a & b;
//    int d = b << 1;
//    cout << c << endl;
//    cout << bitset<32>(c) << endl;
//    cout << d << endl;
//    cout << bitset<32>(d) << endl;
//    return 0;
//}

//c++常见类型所占字节数，sizeof（）结果以字节为单位
//int main() {
//    cout << sizeof(int) << endl;
//    cout << sizeof(long) << endl;
//    cout << sizeof(long long) << endl;
//    cout << sizeof(float) << endl;
//    cout << sizeof(double) << endl;
//    cout << sizeof(bool) << endl;
//    cout << sizeof(char) << endl;
//    return 0;
//}

//substr参数问题
//int main() {
//    string s = "abcdef";
//    cout << s.substr(2,4) << endl;
//    return 0;
//}

// '/0'字符
//int main() {
//    char a = '/', b = '/0';
//    char e = '0';
//    bool f = b == e;
//    int c = a, d= b;
//    cout << a << endl;
//    cout << b << endl;
//    cout << c << endl;
//    cout << d << endl;
//    cout << f << endl;
//    return 0;
//}

//负数的bool值
//int main() {
//    bool flag = -1;
//    cout << flag << endl;
//    if(flag) cout << "true" << endl;
//    return 0;
//}

//string相关，string是值拷贝
//int main() {
//    string s = "abcde";
//    string s1 = s;
//    s1[2] = '2';
//    cout << s << endl;
//    cout << s1 << endl;
//    return 0;
//}

//数组的直接比较和vector的直接比较
//int main() {
//    int a[4] = {1,2,3,4};
//    int b[4] = {1,2,3,4};
//    vector<int> v1, v2;
//    v1.push_back(1);
//    v1.push_back(2);
//    v1.push_back(3);
//    v1.push_back(4);
//    v2.push_back(1);
//    v2.push_back(2);
//    v2.push_back(3);
//    v2.push_back(4);
//    if(a == b) cout << "true" << endl;
//    else cout << "false" << endl;
//    if(v1 == v2) cout << "true" << endl;
//    else cout << "false" << endl;
//    return 0;
////    cout << "helloworld" << endl;
////    if(v1 == v2) cout << "true" << endl;
//}

//二维的vector，以下输出 4      0
//int main() {
//    vector<vector<int>> v;
//    v.push_back({});
//    v.push_back({});
//    v.push_back({});
//    v.push_back({});
//    cout << v.size() << endl;
//    cout << v[0].size() << endl;
//    return 0;
//}

//相同的内存地址，输出 0 5 6 0
//union myun
//{
//    struct { int x; int y; int z; }u;
//    int k;
//}a;
//int main()
//{
//    a.u.x =4;
//    a.u.y =5;
//    a.u.z =6;
//    a.k = 0; //覆盖掉第一个int空间值
//    printf("%d %d %d %d\n",a.u.x,a.u.y,a.u.z,a.k);
//    cout << sizeof(a) << endl;   //输出12
//    system("pause");
//    return 0;
//}

//max参数传列表
//int main() {
//    int a = max({1,5,6,4,3});
//    cout << a << endl;
//    return 0;
//}

//哈希表初始值问题
//int main() {
//    unordered_map<int*, int*> dic;
//    cout << dic[nullptr] << endl;   //会输出0
//    return 0;
//}

//int func(int n) {
//    string s = to_string(n);
//    int count = 0;
//    for(int i = 0; i < s.size() - 1; ++i) {
//        if(s[i] == '2' && s[i + 1] == '5') count++;
//    }
//    return count;
//}

//int main() {
//    string s;
//    //int n = 100000000;
//    int n;
//    scanf("%d", &n);
//    int ans = 0;
//    for(int i = 1; i <= n; ++i) {
//        ans += func(i);
//    }
//    cout << ans << endl;
//    return 0;
//}



//int main() {
//    int a, b;
//    cin >> a >> b;
//    cout << a << b << endl;
//    return 0;
//}

//int main() {
//    int a, b;
//    while(cin >> a >> b) {
//        cout << a << " " << b << endl;
//    }
//    return 0;
//}

//int main() {
//    string s, a;
//    cin >> a;
//    getchar();
//    getline(cin, s);
//    cout << "a" << a << endl;
//    cout << "s" << s.size() << s << endl;
//    return 0;
//}


//测试万能库
//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//    vector<int> v = {2, 1, 6, 3};
//    stack<int> stk;
//    unordered_map<int, int> dic;
//    unordered_set<int> st;
//    sort(v.begin(), v.end());
//    return 0;
//}

//双精度浮点数C语言输入输出
//int main() {
//    double a;
//    scanf("%lf", &a);
//    printf("%f\n", a);
//    cout << a << endl;
//    return 0;
//}






//进制问题
//#include <iostream>
//#include <bitset>
//using namespace std;
//
//int main() {
//    //零0,八进制；0x，十六进制；0b，二进制
//    int x = 0b11111111;
//    //cin >> x;  //若是非十进制输入需指定进制
//    //特别注意，一旦指明进制数后，将一直有效，除非重新指定进制数。
//    //cout << hex;
//    //cout << x << endl;
//    //cout << 65535 << endl;
//    //cout << 15 << endl;
//    cout << x << endl;
//    cout << dec << x << endl;
//    cout << oct << x << endl;
//    cout << hex << x << endl;
//    cout << bitset<32>(x) << endl;
//    cout << "=========================================C语言" << endl;
//    printf("%d\n", x);
//    printf("%o\n", x);
//    printf("%x\n", x);  //十六进制字母小写
//    printf("%X\n", x);  //十六进制字母大写
//    return 0;
//}

//---------------------------------------------------------------------------
#include <iostream>
#include <vector>
using namespace std;
//测试STL
namespace jj00
{
//测试vector容器的capacity
void test_vector_capacity() {
    vector<int> v1;
    for(int i = 0; i < 10000; ++i) {
        v1.push_back(i);
    }
    cout << v1.size() << " " << v1.capacity() << endl;
    cout << "==============================" << endl;

    vector<int> v2;
    v2.resize(10000);
    cout << v2.size() << " " << v2.capacity() << endl;
}

//测试deque和list作为栈的底层实现
void test_stack() {
    stack<int, deque<int>> s1;      //顺序栈
    stack<int, list<int>> s2;       //链栈
    stack<int> s3;                  //默认栈的底层是deque实现的
    for(int i = 0; i < 5; ++i) {
        s1.push(i);
    }
    for(int i = 0; i < 10; ++i) {
        s2.push(i);
    }
    for(int i = 0; i < 5; ++i) {
        s3.push(i);
    }
    cout << "s1.top() == " << s1.top() << endl;
    cout << "s2.top() == " << s2.top() << endl;
    cout << "s3.top() == " << s3.top() << endl;
    //栈中源码重载了操作符“==”，因此可以直接比较两个栈是否相等，前提两个栈底层是一致的，如都为deque或者都为list
    //可以用以下方式来根据判断语句输出true或者false
    cout << "s1 == s3 " << (s1 == s3 ? "true" : "false")  << endl;
}
}

//---------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
//普通语法测试
namespace jj01
{
//测试64位计算机指针大小
void test_pointer_size() {
    int* p1 = new int;
    char* p2 = new char;
    float* p3 = new float;
    double* p4 = new double;
    long long* p5 = new long long;
    bool* p6 = new bool;
    cout << "int* p1 sizeof():" << sizeof(p1) << "     p1:   " << p1 << endl;
    cout << "char* p2 sizeof():" << sizeof(p2) << "     p2:   " << p2 << endl;
    cout << "float* p3 sizeof():" << sizeof(p3) << "     p3:   " << p3 << endl;
    cout << "double* p4 sizeof():" << sizeof(p4) << "     p4:   " << p4 << endl;
    cout << "long long* p5 sizeof():" << sizeof(p5) << "     p5:   " << p5 << endl;
    cout << "bool* p6 sizeof():" << sizeof(p6) << "     p6:   " << p6 << endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;
    delete p6;
}
}

//int main() {
//    //测试vector容器的capacity
//    //jj00::test_vector_capacity();
//
//    //测试deque和list作为栈的底层实现
//    //jj00::test_stack();
//
//    //测试64位计算机指针大小，测试结果显示，无论指针指向何种类型，指针本身的大小均为8字节
//    //jj01:jj01::test_pointer_size();
//    return 0;
//}