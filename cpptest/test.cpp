#include <iostream>
#include <vector>
#include <stdexcept>
#include <bits/stdc++.h>
using namespace std;


//int main() {
//    std::cout << "Hello, World!" << std::endl;
//    //system("pause")暂停命令行窗口
//    //system("pause");
//    return 0;
//}


//#include <stdio.h>
//int main() {
//    printf("hello world");
//    return 0;
//}


//int main() {
//    int sum=0,val=0;
//    //处理多组输入，cin不能读取空格，否则用 getline(cin,val)
//    while(std::cin >> val) {
//        sum+=val;
//    }
//    std::cout << "The sum of these numbers is " << sum << std::endl;
//    return 0;
//}

//int main() {
//    string s="a";
//    string t="ccc";
//    cout << s.length() << endl;
//    cout << s[0] << endl;
//    cout << s[1] << endl;
//    cout << s[2] << endl;
//    //测试swap函数交换string类型
//    swap(s,t);
//    cout << s << t;
//    return 0;
//}

//int main() {
//    int a[] = {0,1,2,3,4,5,6,7,8,9};
////    for( auto i : a) {
////        cout << i << " ";
////    }
////    cout << endl;
//    //数组的指针当成迭代器写法
//    int *e = &a[10];
//    cout << "point variable: " << e << endl;
//    for(int *p=a;p!=e;p++) {
//        cout << *p <<" ";
//    }
//    return 0;
//}

//int main() {
//    int array[]={0,1,2,3,4,5};
//    int *p=&array[3];
//    //数组下标可以为负数
//    cout << p[-2] << endl;
//    cout << array[-2] << endl;   //输出乱码，相当于野指针，编译没有报错
//    return 0;
//}


//int main() {
//    //测试sizeof
//    int a[10];
//    vector<int> v;
//    for(int i=0;i<20;i++) {
//        v.push_back(i);
//    }
//    cout << sizeof(a) << endl;
//    cout << sizeof(v) << endl;
//    //类型转换
//    cout << 3/2 << endl;
//    cout << 3.0/2 << endl;
//    cout << 3/2.0 << endl;
//    return 0;
//}

//int main() {
//    exception e;
//    //函数的声明，定义在main前面不需要声明，定义在main后面需要声明
//    void printa();
//    //先声明，再调用
//    printa();
//    return 0;
//}
//void printa() {
//    cout << "hello world" << endl;
//}

//int main() {
//    //测试数组的begin()和end(),并得出数组的大小
//    int a[5]={0,1,2,3,4};
//    //输出数组名即是输出数组首地址
//    cout << a << endl;
//    cout << end(a)-begin(a) << endl;
//    return 0;
//}

//int main() {
//
//    return 0;
//}


//测试输入输出
//https://blog.csdn.net/qq_38436921/article/details/123928165
//int main() {
//    string s1, s3;
//    //输入hello       world，hello存到s1，world存在s3
//    cin >> s1;
//    cin >> s3;
//    cout << s1 << endl;
//    cout << s3 << endl;
//    //情况缓冲区
//    cin.sync();
//    string s2;
//    getline(cin, s2);
//    cout << s2 << endl;
//    return 0;
//}

//int main() {
//    string s;
//    vector<string> v;
//    //对于本机编译器来说，while(cin>>s)是跳不出来的,只有检测到CTRL+D才能跳出循环。
//    //加上getchar()碰到换行符号才会主动退出循环
//    while(cin >> s) {
//        v.push_back(s);
//        if(getchar() == '\n') break;
//    }
//    cout << v.size() << endl;
//    return 0;
//}




