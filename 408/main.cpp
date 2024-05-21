
//2010
//#include <stdio.h>
//
//void reverse(int a[], int from, int to) {
//    for(int i = from , j = to; i < j; i++, j--) {
//        int temp = a[i];
//        a[i] = a[j];
//        a[j] = temp;
//    }
//}
//
//void converse(int a[], int n, int p) {
//    reverse(a, 0, p - 1);
//    reverse(a, p, n - 1);
//    reverse(a, 0, n - 1);
//}
//
//int main() {
//    int a[6] = {0, 1, 2, 3, 4, 5};
//    int n = 6, p = 3;
//    converse(a, n, p);
//    for(int i = 0; i < n; ++i) {
//        printf("%d ", a[i]);
//    }
//    return 0;
//}


////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
//unordered_map<int, bool> dic;    //dic用来记录某个结点的值的绝对值是否出现过
//
//LinkList func(LinkList head) {
//    LNode *cur = head;
//    while (cur->next != NULL) {         //因为要删除结点，故应该用cur->next 而不是 cur
//        if (dic[abs(cur->next->val)] == true) {
//            cur->next = cur->next->next;
//        } else {
//            cur = cur->next;
//            dic[abs(cur->val)] = true;
//        }
//    }
//    return head;
//}
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束
//    LinkList head = createLinkList();  //创建链表
//    printf("原来的链表为：\n");
//    printLinkList(head);               //打印原链表
//    head = func(head);                 //执行链表所需的操作
//    printf("现在的链表为：\n");
//    printLinkList(head);               //打印现链表
//    return 0;
//}



////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
//LinkList func(LinkList head) {
//    //反转链表
//    //边界条件，链表只有头结点或者只有一个实际的结点，反转之后还是自身
//    if(head->next == NULL || head->next->next == NULL) return head;
//    LNode *cur = head->next;  //head为头结点，故应从头结点后面，也就是实际的第一个结点开始处理
//    head->next = NULL;
//    LNode *temp;
//    while(cur) {
//        temp = cur->next;
//        cur->next = head->next;
//        head->next = cur;
//        cur = temp;
//    }
//    return head;
//}
//
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束
//    LinkList head = createLinkList();  //创建链表
//    printf("原来的链表为：\n");
//    printLinkList(head);               //打印原链表
//    head = func(head);                 //执行链表所需的操作
//    printf("现在的链表为：\n");
//    printLinkList(head);               //打印现链表
//    return 0;
//}



////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
//LinkList func(LinkList head) {
//    return head;
//}
//
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    LinkList head = createLinkList();  //创建链表
//    printf("原来的链表为：\n");
//    printLinkList(head);               //打印原链表
//    head = func(head);                 //执行链表所需的操作
//    printf("现在的链表为：\n");
//    printLinkList(head);               //打印现链表
//    return 0;
//}

////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
//unordered_map<int, bool> dic;    //dic用来记录某个结点的值的绝对值是否出现过
//
//LinkList func(LinkList head) {
//    //链表拆分，快指针每次走两步，慢指针每次走一步，最终快指针停止的时候慢指针正好停留在中间
//    //1.若链表结点为奇数个，则快指针停止的时候慢指针停留在正中间；2.若链表结点为偶数个，则快指针停止的时候慢指针停留在中间靠左的位置
//    //如：1 2 3 4 5 6 链表结点为6个时，慢指针会停留在3结点的位置
//    LNode *fast = head, *slow = head;
//    while(fast != NULL && fast->next != NULL) {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    LNode *head2 = slow->next;
//    //以下为反转链表模板，只不过是用slow指针来充当后半段链表的头结点
//    slow->next = NULL;
//    LNode *cur = head2, *temp;
//    while(cur) {
//        temp = cur->next;
//        cur->next = slow->next;
//        slow->next = cur;
//        cur = temp;
//    }
//    head2 = slow->next;
//    //将链表分为左右两部分，右半部分已反转
//    slow->next = NULL;
//    cur = head;
//    LNode *p = head->next, *q = head2;
//    while(q != NULL) {
//        cur->next = p;
//        p = p->next;
//        cur = cur->next;
//        cur->next = q;
//        q = q->next;
//        cur = cur->next;
//    }
//    cur->next = p;   //额外处理前半条链表多一个结点的情况
//    return head;
//}
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束
//    LinkList head = createLinkList();  //创建链表
//    printf("原来的链表为：\n");
//    printLinkList(head);               //打印原链表
//    head = func(head);                 //执行链表所需的操作
//    printf("现在的链表为：\n");
//    printLinkList(head);               //打印现链表
//    return 0;
//}





////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
//int func(LinkList head, int k) {
//    LNode *fast = head, *slow = head;
//    while(fast != NULL) {
//        if(k-- <= 0) slow = slow->next;
//        fast = fast->next;
//    }
//    if(slow == head) return -1;  //如果k的值大于链表长度，说明快指针走到链表末尾的时候，慢指针还在头结点的位置，此时不存在倒数第k个结点
//    else return slow->val;
//}
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束；随后输入k的值再按回车
//    LinkList head = createLinkList();  //创建链表
//    int k;
//    scanf("%d", &k);
//    printf("原来的链表为：\n");
//    printLinkList(head);               //打印原链表
//    int ans = func(head, k);                 //执行链表所需的操作
//    printf("链表的倒数第k个结点的值为：%d\n", ans);
//    return 0;
//}



////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
//LinkList func(LinkList head1, LinkList head2) {
//
//}
//
//int lenList(LinkList head) {
//    int len = 0;
//    LNode *cur = head->next;  //链表长度不包括头结点，应从实际的第一个结点开始
//    while(cur) {
//        len++;
//        cur = cur->next;
//    }
//    return len;
//}
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束；随后输入k的值再按回车
//    LinkList head = createLinkList();  //创建链表
//    int k;
//    scanf("%d", &k);
//    printf("原来的链表为：\n");
//    printLinkList(head);               //打印原链表
//    int ans = func(head, k);                 //执行链表所需的操作
//    printf("重合的链表为：\n");
//    return 0;
//}




//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//#include <queue>          //使用c++中的队列
//#include <iostream>
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
//
////二叉树封装
////定义二叉树结点
//typedef struct ListNode {
//    int val;
//    struct ListNode *left, *right;
//}ListNode, *Tree;
//
//////按照先序遍历顺序输入二叉树的序列，遇到空指针输入小写的null
//queue<string> input() {
//    queue<string> q;
//    string s;
//    while(true) {
//        cin >> s;
//        q.push(s);
//        if(getchar() == '\n') break;
//    }
//    return q;
//}
//
////建立二叉树
//Tree createTree(queue<string>& q) {
//    if(q.front() == "null") {
//        q.pop();
//        return NULL;
//    }
//    ListNode *root = (ListNode*) malloc(sizeof(ListNode));
//    root->val = stoi(q.front());
//    q.pop();
//    root->left = createTree(q);
//    root->right = createTree(q);
//    return root;
//}
//
//
//void wpl(Tree root, int deep, int& ans) {
//    if(root == NULL) return;
//    if(root->left == NULL && root->right == NULL) {
//        ans += root->val * deep;
//    }
//    wpl(root->left, deep + 1, ans);
//    wpl(root->right, deep + 1, ans);
//}
//
////不同二叉树题目只需要修改func函数参数、返回值以及具体实现即可
//int func(Tree root) {
//    int ans = 0;
//    wpl(root, 0, ans);
//    return ans;
//}
//
//
//
//
//int main() {
//    //测试用例：10 5 17 null null null 4 null 20 null null
//    queue<string> q = input();
//    Tree root = createTree(q);
//    int ans = func(root);
//    printf("二叉树的带权路径长度WPL为：%d\n", ans);
//    return 0;
//}



//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//#include <queue>          //使用c++中的队列
//#include <iostream>
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
//
////二叉树封装
////定义二叉树结点
//typedef struct ListNode {
//    char data[10];
//    struct ListNode *left, *right;
//    ListNode() : left(NULL), right(NULL) {};
//}ListNode, *Tree;
//
////按照先序遍历顺序输入二叉树的序列，遇到空指针输入小写的null
//queue<string> input() {
//    queue<string> q;
//    string s;
//    while(true) {
//        cin >> s;
//        q.push(s);
//        if(getchar() == '\n') break;
//    }
//    return q;
//}
//
////建立二叉树
//Tree createTree(queue<string>& q) {
//    if(q.front() == "null") {
//        q.pop();
//        return NULL;
//    }
//    ListNode *root = (ListNode*) malloc(sizeof(ListNode));
//    string str = q.front();
//    int i;
//    for(i = 0; i < str.size(); i++) {
//        root->data[i] = str[i];
//    }
//    root->data[i] = '\0';
//    q.pop();
//    root->left = createTree(q);
//    root->right = createTree(q);
//    return root;
//}
//
//
//void inorder(Tree root, int deep) {
//    if(root == NULL) return;
//    if(root->left == NULL && root->right == NULL) {
//        printf("%s", root->data);
//    }else {
//        if(deep > 1) printf("(");
//        inorder(root->left, deep + 1);
//        printf("%s", root->data);
//        inorder(root->right, deep + 1);
//        if(deep > 1) printf(")");
//    }
//}
//
//
////不同二叉树题目只需要修改func函数参数、返回值以及具体实现即可
//void func(Tree root) {
//    inorder(root, 1);
//}
//
//
//
//
//int main() {
//    //测试用例：+ * 41 null null 25 null null / 30 null null + 15 null null 2 null null
//    queue<string> q = input();
//    Tree root = createTree(q);
//    printf("该二叉树转化为中缀表达式为：\n");
//    func(root);
//    return 0;
//}


//#include <stdio.h>
//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//int func(int s1[], int s2[], int s3[], int n1, int n2, int n3) {
//    int ans = INT_MAX;
//    for(int i = 0; i < n1; i++) {
//        for(int j = 0; j < n2; j++) {
//            for(int k = 0; k < n3; k++) {
//                int a = s1[i];
//                int b = s2[j];
//                int c = s3[k];
//                int temp = abs(a - b) + abs(a - c) + abs(b - c);
//                ans = min(ans, temp);
//            }
//        }
//    }
//    return ans;
//}
//
//int main() {
//    int s1[] = {-1, 0, 9};
//    int s2[] = {-25, -10, 10, 11};
//    int s3[] = {2, 9, 17, 30, 41};
//    int n1 = 3;
//    int n2 = 4;
//    int n3 = 5;
//    int ans = func(s1, s2, s3, n1, n2, n3);
//    printf("%d", ans);
//    return 0;
//}




////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
//unordered_map<int, bool> dic;
//
//LinkList func(LinkList head) {
//    LNode *cur = head;
//    while(cur->next != NULL) {
//        if(dic[abs(cur->next->val)] == true) {
//            cur->next = cur->next->next;
//        }else {
//            cur = cur->next;
//            dic[abs(cur->val)] = true;
//        }
//    }
//    return head;
//}
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束
//    LinkList head = createLinkList();  //创建链表
//    printf("原来的链表为：\n");
//    printLinkList(head);               //打印原链表
//    head = func(head);                 //执行链表所需的操作
//    printf("现在的链表为：\n");
//    printLinkList(head);               //打印现链表
//    return 0;
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
//    if(q.empty()) {
//        cout << -1 << endl;
//    }
//    return 0;
//}




























//#include <bits/stdc++.h>
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode() {};
//    ListNode(int _val) : val(_val), next(nullptr) {};
//};
//
//ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
//    if(!head1 || !head2) return head1 ? head1 : head2;
//    ListNode *dummyHead = new ListNode();
//    ListNode *cur = dummyHead, *p = head1, *q = head2;
//    while(p && q) {
//        if(p->val < q->val) {
//            cur->next = p;
//            p = p->next;
//        }else {
//            cur->next = q;
//            q = q->next;
//        }
//        cur = cur->next;
//    }
//    cur->next = p ? p : q;
//    return dummyHead->next;
//}
//
//ListNode* sortList(ListNode* head) {
//    if(!head || !head->next) return head;
//    ListNode *fast = head->next, *slow = head;
//    while(fast && fast->next) {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    ListNode *head2 = slow->next;
//    slow->next = nullptr;
//    return mergeTwoLists(sortList(head), sortList(head2));
//}
//
//
//ListNode* createList() {
//    ListNode *dummyHead = new ListNode(), *tail = dummyHead;
//    int x;
//    while(true) {
//        cin >> x;
//        ListNode *node = new ListNode(x);
//        tail->next = node;
//        tail = node;
//        if(getchar() == '\n') break;
//    }
//    tail->next = nullptr;
//    return dummyHead->next;
//}
//
//void printList(ListNode* head) {
//    ListNode *cur = head;
//    while(cur) {
//        cout << cur->val << " ";
//        cur = cur->next;
//    }
//}
//
//int main() {
//    ListNode *head1 = createList();
//    ListNode *head2 = createList();
//    ListNode *ans = mergeTwoLists(sortList(head1), sortList(head2));
//    printList(ans);
//    return 0;
//}



//////7 1
//////3 6 1 7 2 5 4
//////输出：BBAAABA
////
//////10 2
//////4 8 9 10 7 6 5 3 2 1
//////输出：BAAAAABBBA
//
//#include <bits/stdc++.h>
//using namespace std;
//
//struct Node {
//    int val;
//    int pos;
//    bool operator<(const Node& tmp) const {
//        return val > tmp.val;
//    }
//};
//
//
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    vector<int> nums(n);
//    vector<Node> node(n);
//    for(int i = 0; i < n; ++i) {
//        cin >> nums[i];
//        node[i].val = nums[i];
//        node[i].pos = i;
//    }
//    sort(node.begin(), node.end());
//    for(int i = 0; i < n; ++i) {
//        cout << node[i].val << " ";
//    }
//    return 0;
//}


//#include <bits/stdc++.h>
////#include <unordered_map>
//using namespace std;
//
//void func(int a[], int n, int b[]) {
//    for(int i = 0; i < n; i++) {
//        b[a[i]]++;
//    }
//}
//
//int main() {
//    int a[] = {1,2,3,2,1,5,2};
//    int n = 7;
//    int b[6] = {0};
//    func(a, n, b);
//    for(int i = 0; i < 6; i++) {
//        printf("%d : %d\n",i,b[i]);
//    }
//    return 0;
//}


//#include <bits/stdc++.h>
////#include <unordered_map>
//using namespace std;
//
//unordered_map<int, int> dic;
//
//int func(int a[], int n) {
//    for(int i = 0; i < n; i++) {
//        dic[a[i]]++;
//        if(dic[a[i]] > n / 2) return a[i];
//    }
//    return -1;
//}
//
//int main() {
//    int a[] = {-1,-2,3,-2,-2,5,-2};
//    int n = 7;
//    int res = func(a, n);
//    printf("%d", res);
//    return 0;
//}


////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
//unordered_map<int, bool> dic;
//LinkList func(LinkList head) {
//    LNode *cur = head;
//    while (cur->next != NULL) {
//        if (dic[abs(cur->next->val)] == true) {
//            cur->next = cur->next->next;
//        } else {
//            cur = cur->next;
//            dic[abs(cur->val)] = true;
//        }
//    }
//    return head;
//}
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束
//    LinkList head = createLinkList();  //创建链表
//    printf("原来的链表为：\n");
//    printLinkList(head);               //打印原链表
//    head = func(head);                 //执行链表所需的操作
//    printf("现在的链表为：\n");
//    printLinkList(head);               //打印现链表
//    return 0;
//}


//2010算法题
//时间复杂度O(n)，空间复杂度O(p)
//#include <bits/stdc++.h>
//using namespace std;
//
//void func(int a[], int n, int p) {
//    int temp[p];
//    for(int i = 0; i < p; i++) {
//        temp[i] = a[i];
//    }
//    for(int i = 0; i < n; i++) {
//        if(i < n - p) {
//            a[i] = a[i + p];
//        }else {
//            a[i] = temp[i - (n - p)];
//        }
//    }
//}
//
//int main() {
//    int a[6] = {0, 1, 2, 3, 4, 5};
//    int n = 6;
//    int p = 3;
//    cout << "数组循环左移前：" << endl;
//    for(int i = 0; i < n; i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    func(a, n, p);
//    cout << "数组循环左移后：" << endl;
//    for(int i = 0; i < n; i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    return 0;
//}


//2010算法题
//时间复杂度O(n)，空间复杂度O(1)
//#include <bits/stdc++.h>
//using namespace std;
//
//
//void reverse(int a[], int from, int to) {
//    for(int i = from , j = to; i < j; i++, j--) {
//        int temp = a[i];
//        a[i] = a[j];
//        a[j] = temp;
//    }
//}
//
//void func(int a[], int n, int p) {
//    reverse(a, 0, p - 1);
//    reverse(a, p, n - 1);
//    reverse(a, 0, n - 1);
//}
//
//int main() {
//    int a[6] = {0, 1, 2, 3, 4, 5};
//    int n = 6;
//    int p = 3;
//    cout << "数组循环左移前：" << endl;
//    for(int i = 0; i < n; i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    func(a, n, p);
//    cout << "数组循环左移后：" << endl;
//    for(int i = 0; i < n; i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    return 0;
//}



//2011算法题
//时间复杂度O(L)，空间复杂度O(1)
//#include <bits/stdc++.h>
//using namespace std;
//
//int func(int a[], int b[], int L) {
//    int ans = 0, count = 0;
//    int i = 0, j = 0;
//    while(true) {
//        if(a[i] < b[j]) {
//            ans = a[i];
//            i++;
//        }else {
//            ans = b[j];
//            j++;
//        }
//        count++;
//        if(count == L) break;
//    }
//    return ans;
//}
//
//int main() {
//    int a[5] = {11, 13, 15, 17, 19};
//    int b[5] = {2, 4, 6, 8, 20};
//    int L = 5;
//    cout << "数组a和数组b合并后的中位数为：" << endl;
//    int ans = func(a, b, L);
//    cout << ans << endl;
//    return 0;
//}






//2013算法题
//时间复杂度O(n)，空间复杂度O(n)
//#include <bits/stdc++.h>
//using namespace std;
//
//
//int func(int a[], int n) {
//    unordered_map<int, int> dic;  //哈希表会占用空间
//    for(int i = 0; i < n; i++) {
//        dic[a[i]]++;
//        if(dic[a[i]] > n / 2) return a[i];
//    }
//    return -1;
//}
//
//int main() {
//    int a[8] = {0, 5, 5, 3, 5, 7, 5, 5};
//    int b[8] = {0, 5, 5, 3, 5, 1, 5, 7};
//    int n = 8;
//    int ans1 = func(a, n);
//    int ans2 = func(b, n);
//    printf("数组a的主元素为%d\n", ans1);
//    printf("数组b的主元素为%d\n", ans2);
//    return 0;
//}






//2018算法题
//时间复杂度O(n)，空间复杂度O(n)
//#include <bits/stdc++.h>
//using namespace std;
//
//
//int func(int a[], int n) {
//    unordered_map<int, bool> dic;  //哈希表会占用空间
//    for(int i = 0; i < n; i++) {
//        dic[a[i]] = true;
//    }
//    for(int i = 1; i <= n + 1; i++) {
//        if(dic[i] == false) return i;
//    }
//    return -1;
//}
//
//int main() {
//    int a[4] = {-5, 3, 2, 3};
//    int b[3] = {1, 2, 3};
//    int n1 = 4;
//    int n2 = 3;
//    int ans1 = func(a, n1);
//    int ans2 = func(b, n2);
//    printf("数组a未出现的最小正整数为%d\n", ans1);
//    printf("数组b未出现的最小正整数为%d\n", ans2);
//    return 0;
//}







//2020算法题
//时间复杂度O(n^3)，空间复杂度O(1)
//#include <bits/stdc++.h>
//using namespace std;
//
//int func(int s1[], int s2[], int s3[], int n1, int n2, int n3) {
//    int ans = INT_MAX;
//    for(int i = 0; i < n1; i++) {
//        for(int j = 0; j < n2; j++) {
//            for(int k = 0; k < n3; k++) {
//                int a = s1[i];
//                int b = s2[j];
//                int c = s3[k];
//                int temp = abs(a - b) + abs(a - c) + abs(b - c);
//                ans = min(ans, temp);
//            }
//        }
//    }
//    return ans;
//}
//
//int main() {
//    int s1[] = {-1, 0, 9};
//    int s2[] = {-25, -10, 10, 11};
//    int s3[] = {2, 9, 17, 30, 41};
//    int n1 = 3;
//    int n2 = 4;
//    int n3 = 5;
//    int ans = func(s1, s2, s3, n1, n2, n3);
//    printf("%d", ans);
//    return 0;
//}


//非真题，反转数组，P18 大题第2题
//时间复杂度O(n)，空间复杂度O(1)
//#include <bits/stdc++.h>
//using namespace std;
//
//void func(int a[], int n) {
//    for(int i = 0; i < n / 2; i++) {
//        int temp = a[i];
//        a[i] = a[n - 1 - i];
//        a[n - 1 - i] = temp;
//    }
//}
//
//int main() {
//    int a[7] = {1,2, 3, 4, 5, 6, 7};
//    int n = 7;
//    cout << "数组反转前为：" << endl;
//    for(int i = 0; i < n; i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    func(a, n);
//    cout << "数组反转后为：" << endl;
//    for(int i = 0; i < n; i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    return 0;
//}

//非真题，合并两个有序数组，P18 大题第7题
//时间复杂度O(m+n)，空间复杂度O(m+n)
//#include <bits/stdc++.h>
//using namespace std;
//
//void merge(int a[], int b[], int temp[], int m, int n) {
//    int i = 0, j = 0, k = 0;
//    while(i < m && j < n) {
//        if(a[i] < b[j]) {
//            temp[k++] = a[i++];
//        }else {
//            temp[k++] = b[j++];
//        }
//    }
//    while(i < m) {
//        temp[k++] = a[i++];
//    }
//    while(j < n) {
//        temp[k++] = b[j++];
//    }
//}
//
//int main() {
//    int a[4] = {1, 3, 5, 20};
//    int b[7] = {2, 4, 6, 8, 10, 12, 14};
//    int m = 4;
//    int n = 7;
//    int temp[m + n];
//    merge(a, b, temp, m, n);
//    cout << "两个有序数组归并后的结果为：" << endl;
//    for(int i = 0; i < m + n; i++) {
//        cout << temp[i] << " ";
//    }
//    cout << endl;
//    return 0;
//}

//非真题，数组二分查找，P18 大题第9题
//时间复杂度O(logn)(若只考虑查找开销不考虑查找失败的移动开销)，空间复杂度O(1)
//#include <bits/stdc++.h>
//using namespace std;
//
//bool func(int a[], int n, int x) {
//    int low = 0, high = n - 1, mid;
//    while(low <= high) {
//        mid = (low + high) / 2;
//        if(a[mid] == x) break;
//        else if(a[mid] < x) low = mid + 1;
//        else high = mid - 1;
//    }
//    if(a[mid] == x && mid != n - 1) {
//        swap(a[mid], a[mid + 1]);
//        return true;
//    }
//    if(low > high) {
//        int i;
//        for(i = n - 1; i > high; i--) {
//            a[i + 1] = a[i];
//        }
//        a[i + 1] = x;
//        return false;
//    }
//    return true;
//}
//
//int main() {
//    int a[15] = {1, 3, 5, 7, 9};
//    int n = 5;
//    int x = 6;
//    bool flag = func(a, n, x);
//    if(flag == true) {
//        cout << "元素x查找成功，元素x和后面交换后为：" << endl;
//        for(int i = 0; i < n; i++) {
//            cout << a[i] << " ";
//        }
//        cout << endl;
//    }else {
//        cout << "元素x查找失败，元素x加入原数组后为：" << endl;
//        for(int i = 0; i < n + 1; i++) {
//            cout << a[i] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}

////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
////合并两个有序链表
//LinkList func(LinkList head1, LinkList head2) {
//    if(head1->next == NULL || head2->next == NULL) return head1->next != NULL ? head1 : head2;
//    LNode *head = new LNode();
//    LNode *cur = head, *p = head1->next, *q = head2->next;
//    while(p != NULL && q != NULL) {
//        if(p->val < q->val) {
//            cur->next = p;
//            p = p->next;
//        }else {
//            cur->next = q;
//            q = q->next;
//        }
//        cur = cur->next;
//    }
//    cur->next = p != NULL ? p : q;
//    return head;
//}
//
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束
//    LinkList head1= createLinkList();  //创建链表1
//    printf("原来的链表1为：\n");
//    printLinkList(head1);         //打印链表1
//    LinkList head2 = createLinkList();  //创建链表2
//    printf("原来的链表2为：\n");
//    printLinkList(head2);         //打印链表2
//    LinkList head = func(head1, head2); //执行链表所需的操作
//    printf("现在的链表为：\n");
//    printLinkList(head);                //打印现链表
//    return 0;
//}


////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
////链表排序
//LinkList func(LinkList head1, LinkList head2) {
//    if(head1->next == NULL || head2->next == NULL) return head1->next != NULL ? head1 : head2;
//    LNode *head = new LNode();
//    LNode *cur = head, *p = head1->next, *q = head2->next;
//    while(p != NULL && q != NULL) {
//        if(p->val < q->val) {
//            cur->next = p;
//            p = p->next;
//        }else {
//            cur->next = q;
//            q = q->next;
//        }
//        cur = cur->next;
//    }
//    cur->next = p != NULL ? p : q;
//    return head;
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
//LinkList sortList(LinkList head) {
//    if(head->next == NULL || head->next->next == NULL) return head;
//    LNode *fast = head, *slow = head;
//    while(fast != NULL && fast->next != NULL) {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    LNode *temp = slow->next;
//    slow->next = NULL;
//    LNode *head1 = head, *head2 = new LNode ();
//    head2->next = temp;
//    return func(sortList(head1), sortList(head2));
//}
//
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束
//    LinkList head = createLinkList();  //创建链表
//    printf("原来的链表为：\n");
//    printLinkList(head);               //打印原链表
//    head = sortList(head);                 //执行链表所需的操作
//    printf("现在的链表为：\n");
//    printLinkList(head);               //打印现链表
//    return 0;
//}




////快速排序
//#include <bits/stdc++.h>
//using namespace std;
//
//int partition(int a[], int left, int right) {
//    int pivot = a[left];
//    while(left < right) {
//        while(left < right && a[right] >= pivot) right--;
//        a[left] = a[right];
//        while(left < right && a[left] <= pivot) left++;
//        a[right] = a[left];
//    }
//    a[left] = pivot;
//    return left;
//}
//
//void quickSort(int a[], int left, int right) {
//    if(left >= right) return;
//    int pivotpos = partition(a, left, right);
//    quickSort(a, left, pivotpos - 1);
//    quickSort(a, pivotpos + 1, right);
//}
//
//int main() {
//    int a[7] = {5, 3, 8, 4, 2,9, 1};
//    int n = 7;
//    printf("排序前的数组为：\n");
//    for(int i = 0; i < n; i++) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//    quickSort(a, 0, n - 1);
//    printf("排序后的数组为：\n");
//    for(int i = 0; i < n; i++) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//    return 0;
//}



//归并排序
//#include <bits/stdc++.h>
//using namespace std;
//
//int a[7] = {5, 3, 8, 4, 2,9, 1};
//const int n = 7;
//int temp[n];
//
//void mergeSort(int a[], int left, int right) {
//    if(left >= right) return;
//    int mid = (left + right) / 2;
//    mergeSort(a, left, mid);
//    mergeSort(a, mid + 1, right);
//    int i = left, j = mid + 1, k = left;
//    while(i <= mid && j <= right) {
//        if(a[i] < a[j]) {
//            temp[k++] = a[i++];
//        }else {
//            temp[k++] = a[j++];
//        }
//    }
//    while(i <= mid) temp[k++] = a[i++];
//    while(j <= right) temp[k++]= a[j++];
//    for(int x = left; x <= right; x++) {
//        a[x] = temp[x];
//    }
//}
//
//int main() {
//    printf("排序前的数组为：\n");
//    for(int i = 0; i < n; i++) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//    mergeSort(a, 0, n - 1);
//    printf("排序后的数组为：\n");
//    for(int i = 0; i < n; i++) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//    return 0;
//}


//#include <bits/stdc++.h>
//using namespace std;
//
//int binarySearch(int a[], int n, int target) {
//    int left = 0, right = n - 1;
//    while(left <= right) {
//        int mid = (left + right) / 2;
//        if(a[mid] == target) {
//            return mid;
//        }else if(a[mid] < target) {
//            left = mid + 1;
//        }else {
//            right = mid - 1;
//        }
//    }
//    return -1;
//}
//
//int main() {
//    int a[7] = {1,3,4,6,8,9,13};
//    int n = 7;
//    int target = 4;
//    int res = binarySearch(a, n, target);
//    printf("元素target在数组a中的下标为：%d\n", res);
//    return 0;
//}



////链表找环入口
////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//    LNode() {};
//    LNode(int x) : val(x) {};
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
//
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
////链表找环入口
//LNode* func(LinkList head) {
//    unordered_map<LNode*, bool> dic;
//    LNode *cur = head->next;
//    while(cur != NULL) {
//        if(dic[cur] == true) {
//            return cur;
//        }else {
//            dic[cur] = true;
//        }
//        cur = cur->next;
//    }
//    return NULL;
//}
//
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    LNode *head = new LNode(0);
//    LNode *node1 = new LNode(1);
//    LNode *node2 = new LNode(2);
//    LNode *node3 = new LNode(3);
//    LNode *node4 = new LNode(4);
//    LNode *node5 = new LNode(5);
//    head->next = node1;
//    node1->next = node2;
//    node2->next = node3;
//    node3->next = node4;
//    node4->next = node5;
//    node5->next = node3;
//    LNode *res = func(head);
//    if(res == NULL) {
//        printf("链表不存在环");
//    }else {
//        printf("%d", res->val);
//    }
//    return 0;
//}

////2012相交链表
////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    char data;
//    struct LNode *next;
//    LNode() {};
//    LNode(char c) : data(c) {};
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
//
////计算链表长度（不包括头结点）
//int lenList(LinkList head) {
//    LNode *cur = head->next;
//    int len = 0;
//    while(cur != NULL) {
//        len++;
//        cur = cur->next;
//    }
//    return len;
//}
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
//LinkList func(LinkList str1, LinkList str2) {
//    int len1 = lenList(str1);
//    int len2 = lenList(str2);
//    LNode *p, *q;
//    for(p = str1; len1 > len2; len1--) {
//        p = p->next;
//    }
//    for(q = str2; len1 < len2; len2--) {
//        q = q->next;
//    }
//    while(p != q) {      //若两条链表无交点，最终p和q都等于NULL退出循环
//        p = p->next;
//        q = q->next;
//    }
//    return p;
//}
//
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    LNode *str1 = new LNode(), *str2 = new LNode();  //创建题目中的链表
//    LNode *l = new LNode('l');
//    LNode *o = new LNode('o');
//    LNode *a = new LNode('a');
//    LNode *d = new LNode('d');
//    LNode *i = new LNode('i');
//    LNode *n = new LNode('n');
//    LNode *g = new LNode('g');
//    LNode *b = new LNode('b');
//    LNode *e = new LNode('e');
//    str1->next = l;
//    l->next = o;
//    o->next = a;
//    a->next = d;
//    d->next = i;
//    i->next = n;
//    n->next = g;
//    g->next = NULL;
//    str2->next = b;
//    b->next = e;
//    e->next = i;
//
//    LNode *res = func(str1, str2);
//    if(res == NULL) {
//        printf("两条链表没有交点\n");
//    }else {
//        printf("两条链表交点处的值为：%c\n",res->data);
//    }
//    return 0;
//}



////判断回文链表
////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
////判断回文链表
//bool func(LinkList head) {
//    LNode *fast = head, *slow = head;
//    while(fast != NULL && fast->next != NULL) {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    LNode *cur = slow->next, *temp;
//    slow->next = NULL;
//    while(cur != NULL) {
//        temp = cur->next;
//        cur->next = slow->next;
//        slow->next = cur;
//        cur = temp;
//    }
//    LNode *head2 = slow->next;
//    slow->next = NULL;
//    LNode *head1 = head->next;
//    LNode *p = head1, *q = head2;
//    while(q != NULL) {
//        if(p->val != q->val) {
//            return false;
//        }
//        p = p->next;
//        q = q->next;
//    }
//    return true;
//}
//
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束
//    LinkList head = createLinkList();  //创建链表
//    printf("输入的链表为：\n");
//    printLinkList(head);               //打印原链表
//    bool res = func(head);                 //执行链表所需的操作
//    if(res == false) {
//        printf("输入的链表不是回文链表\n");
//    }else {
//        printf("输入的链表是回文链表\n");
//    }
//    return 0;
//}



////删除链表倒数第k个结点
////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
////删除链表倒数第k个结点
//LinkList func(LinkList head, int k) {
//    LNode *fast = head, *slow = head;
//    while(fast != NULL) {
//        if(k-- < 0) slow = slow->next;
//        fast = fast->next;
//    }
//    slow->next = slow->next->next;
//    return head;
//}
//
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束
//    LinkList head = createLinkList();  //创建链表
//    printf("原来的链表为：\n");
//    printLinkList(head);               //打印原链表
//    int k = 5;
//    printf("k的值为：%d\n", k);
//    head = func(head, k);              //执行链表所需的操作
//    printf("删除倒数第k个结点后的链表为：\n");
//    printLinkList(head);               //打印现链表
//    return 0;
//}


////2016算法题
//#include <bits/stdc++.h>
//using namespace std;
//
//int partition(int a[], int left, int right) {
//    int pivot = a[left];
//    while(left < right) {
//        while(left < right && a[right] >= pivot) right--;
//        a[left] = a[right];
//        while(left < right && a[left] <= pivot) left++;
//        a[right] = a[left];
//    }
//    a[left] = pivot;
//    return left;
//}
//
//void quickSort(int a[], int left, int right, int k) {
//    if(left >= right) return;
//    int pivotpos = partition(a, left, right);
//    if(pivotpos == k) {
//        return;
//    }else if(pivotpos < k) {
//        quickSort(a, pivotpos + 1, right, k);
//    }else {
//        quickSort(a, left, pivotpos - 1, k);
//    }
//}
//
////时间复杂度为O(n)
//int func(int a[], int n) {
//    quickSort(a, 0, n - 1, n / 2);
//    printf("数组分割后的值为\n");
//    for(int i = 0; i < n; i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    int s1 = 0, s2 = 0;
//    for(int i = 0; i < n; i++) {
//        if(i < n / 2) {
//            s1 += a[i];
//        }else {
//            s2 += a[i];
//        }
//    }
//    return s2 - s1;
//}
//
//int main() {
//    //数组a划分后s1应为{1,2,3}，s2应为{4,5,6,9}，集合s1和s2中元素顺序无所谓
//    int a[7] = {5,6,1,3,2,9,4};
//    //数组b划分后s1应为{1,2,3,4}，s2应为{5,6,7,9}，集合s1和s2中元素顺序无所谓
//    int b[8] = {5,6,1,3,2,9,4,7};
//    int n1 = 7;
//    int n2 = 8;
//    int res1 = func(a, n1);
//    int res2 = func(b, n2);
//    printf("数组a划分后在s1-s2绝对值最大为：%d\n", res1);
//    printf("数组b划分后在s1-s2绝对值最大为：%d\n", res2);
//    return 0;
//}



////快速排序
//#include <bits/stdc++.h>
//using namespace std;
//
//int partition(int a[], int left, int right) {
//    int pivot = a[left];
//    while(left < right) {
//        while(left < right && a[right] >= pivot) right--;
//        a[left] = a[right];
//        while(left < right && a[left] <= pivot) left++;
//        a[right] = a[left];
//    }
//    a[left] = pivot;
//    return left;
//}
//
//void quickSort(int a[], int left, int right) {
//    if(left >= right) return;
//    int pivotpos = partition(a, left, right);
//    quickSort(a, left, pivotpos - 1);
//    quickSort(a, pivotpos + 1, right);
//}
//
//int func(int a[], int n) {
//    quickSort(a, 0, n - 1);   //将整个数组排序
//    int s1 = 0, s2 = 0;
//    for(int i = 0; i < n; i++) {
//        if(i < n / 2) {   //无论数组个数是奇数还是偶数，最终排序后都是以数组坐标为n/2开始直至n-1为集合s2中的元素，n为数组元素个数
//            s1 += a[i];
//        }else {
//            s2 += a[i];
//        }
//    }
//    return s2 - s1;
//}
//
//int main() {
//    //数组a划分后s1应为{1,2,3}，s2应为{4,5,6,9}，集合s1和s2中元素顺序无所谓
//    int a[7] = {5,6,1,3,2,9,4};
//    //数组b划分后s1应为{1,2,3,4}，s2应为{5,6,7,9}，集合s1和s2中元素顺序无所谓
//    int b[8] = {5,6,1,3,2,9,4,7};
//    int n1 = 7;
//    int n2 = 8;
//    int res1 = func(a, n1);
//    int res2 = func(b, n2);
//    printf("数组a划分后在s1-s2绝对值最大为：%d\n", res1);
//    printf("数组b划分后在s1-s2绝对值最大为：%d\n", res2);
//    return 0;
//}


////2021真题
//#include <bits/stdc++.h>
//using namespace std;
//
////const int MAXV =10;
//#define MAXV 10  //#define定义常量不需要加分号
//
//typedef struct {
//    int numVertices,numEdges;
//    char VerticesList[MAXV];
//    int Edge[MAXV][MAXV];
//}MGraph;
//
////时间复杂度O(n^2)，空间复杂度O(1)
//int IsExistEL(MGraph G) {
//    int degree = 0, count = 0;
//    for(int i = 0; i < G.numVertices; i++) {
//        degree = 0;
//        for(int j = 0; j < G.numVertices; j++) {
//            degree += G.Edge[i][j];
//        }
//        if(degree % 2 == 0) {
//            count++;
//        }
//    }
//    if(count == 0 || count == 2) {
//        return 1;
//    }else {
//        return 0;
//    }
//}
//
//int main() {
//
//    return 0;
//}


////无向图邻接表的深度优先遍历
//#include <bits/stdc++.h>
//using namespace std;
//
//#define MaxVertexNum 6   //以下main函数示例为6个顶点的邻接表存储
//
//typedef struct ArcNode {
//    int adjvex;
//    struct ArcNode *next;
//    //InfoType info;
//}ArcNode;
//
//typedef struct VNode {
//    char data;
//    ArcNode *first;
//}VNode, AdjList[MaxVertexNum];   //AdjList为被typedef重新命名的一个VNode数组类型名
//
//typedef struct {
//    AdjList vertices;            //AdjList在上面被重命名为一个数组类型名，故vertices是一个VNode数组
//    int vexnum, arcnum;
//}ALGraph;
//
//bool vis[MaxVertexNum];
//
//void dfs(ALGraph graph, int v) {
//    printf("%c\n", graph.vertices[v].data);
//    vis[v] = true;
//    for(ArcNode *p = graph.vertices[v].first; p != NULL; p = p->next) {
//        if(vis[p->adjvex] == false) {
//            dfs(graph, p->adjvex);
//        }
//    }
//}
//
//void dfsGraph(ALGraph graph) {
//    for(int i = 0; i < graph.vexnum; i++) {   //bool数组默认初始值本身就为false，故此处循环可省略
//        vis[i] = false;
//    }
//    for(int v = 0; v < graph.vexnum; v++) {
//        if(vis[v] == false) {
//            dfs(graph, v);
//        }
//    }
//}
//
//
//int main() {
//    ALGraph graph;
//    graph.vexnum = MaxVertexNum;
//    graph.arcnum = 12;             //无向图边表结点数为边的2倍
//
//    //初始化顶点的值
//    graph.vertices[0].data = 'A';
//    graph.vertices[1].data = 'B';
//    graph.vertices[2].data = 'C';
//    graph.vertices[3].data = 'D';
//    graph.vertices[4].data = 'E';
//    graph.vertices[5].data = 'F';
//
//    //构建顶点A的边表结点
//    ArcNode *edgeAB = new ArcNode();
//    edgeAB->adjvex = 1;
//    ArcNode *edgeAC = new ArcNode();
//    edgeAC->adjvex = 2;
//    //构建顶点A的邻接表
//    graph.vertices[0].first = edgeAB;
//    edgeAB->next = edgeAC;
//    edgeAC->next = NULL;
//
//    //构建顶点B的边表结点
//    ArcNode *edgeBA = new ArcNode();
//    edgeBA->adjvex = 0;
//    ArcNode *edgeBC = new ArcNode();
//    edgeBC->adjvex = 2;
//    ArcNode *edgeBD = new ArcNode();
//    edgeBD->adjvex = 3;
//    //构建顶点B的邻接表
//    graph.vertices[1].first = edgeBA;
//    edgeBA->next = edgeBC;
//    edgeBC->next = edgeBD;
//    edgeBD->next = NULL;
//
//    //构建顶点C的边表结点
//    ArcNode *edgeCA = new ArcNode();
//    edgeCA->adjvex = 0;
//    ArcNode *edgeCB = new ArcNode();
//    edgeCB->adjvex = 1;
//    ArcNode *edgeCD = new ArcNode();
//    edgeCD->adjvex = 3;
//    //构建顶点C的邻接表
//    graph.vertices[2].first = edgeCA;
//    edgeCA->next = edgeCB;
//    edgeCB->next = edgeCD;
//    edgeCD->next = NULL;
//
//    //构建顶点D的边表结点
//    ArcNode *edgeDB = new ArcNode();
//    edgeDB->adjvex = 1;
//    ArcNode *edgeDC = new ArcNode();
//    edgeDC->adjvex = 2;
//    //构建顶点D的邻接表
//    graph.vertices[3].first = edgeDB;
//    edgeDB->next = edgeDC;
//    edgeDC->next = NULL;
//
//    //构建顶点E的边表结点
//    ArcNode *edgeEF = new ArcNode();
//    edgeEF->adjvex = 5;
//    //构建顶点E的邻接表
//    graph.vertices[4].first = edgeEF;
//    edgeEF->next = NULL;
//
//    //构建顶点F的边表结点
//    ArcNode *edgeFE = new ArcNode();
//    edgeFE->adjvex = 4;
//    //构建顶点F的邻接表
//    graph.vertices[5].first = edgeFE;
//    edgeFE->next = NULL;
//
//    //输出main函数中构建的图
//    printf("图的顶点为：\n");
//    for(int i = 0; i < graph.vexnum; i++) {
//        printf("顶点%c的下标为：%d\n", graph.vertices[i].data, i);
//    }
//    printf("\n");
//    printf("图的邻接表为：\n");
//    for(int i = 0; i < graph.vexnum; i++) {
//        printf("%c->", graph.vertices[i].data);
//        for(ArcNode *p = graph.vertices[i].first; p != NULL; p = p->next) {
//            printf("%d->", p->adjvex);
//        }
//        printf("NULL\n");
//    }
//
//
//    printf("图的深度优先遍历结果为：\n");
//    dfsGraph(graph);    //深度优先搜索遍历图
//
//    return 0;
//}


////无向图邻接表的广度优先遍历
//#include <bits/stdc++.h>
//using namespace std;
//
//#define MaxVertexNum 6   //以下main函数示例为6个顶点的邻接表存储
//
//typedef struct ArcNode {
//    int adjvex;
//    struct ArcNode *next;
//    //InfoType info;
//}ArcNode;
//
//typedef struct VNode {
//    char data;
//    ArcNode *first;
//}VNode, AdjList[MaxVertexNum];   //AdjList为被typedef重新命名的一个VNode数组类型名
//
//typedef struct {
//    AdjList vertices;            //AdjList在上面被重命名为一个数组类型名，故vertices是一个VNode数组
//    int vexnum, arcnum;
//}ALGraph;
//
//bool vis[MaxVertexNum];
//
//void bfs(ALGraph graph, int v) {
//    printf("%c\n", graph.vertices[v].data);
//    vis[v] = true;
//    queue<VNode> q;
//    q.push(graph.vertices[v]);
//    while(q.empty() == false) {
//        VNode node = q.front();
//        q.pop();
//        //类似链表的遍历，从顶点的第一个边表结点往后遍历
//        for(ArcNode *p = node.first; p != NULL; p = p->next) {
//            if(vis[p->adjvex] == false) {
//                printf("%c\n", graph.vertices[p->adjvex].data);
//                vis[p->adjvex] = true;
//                q.push(graph.vertices[p->adjvex]);
//            }
//        }
//    }
//}
//
//void bfsGraph(ALGraph graph) {
//    //bool数组默认初始值本身就为false，故此处循环可省略
//    for(int i = 0; i < graph.vexnum; i++) {
//        vis[i] = false;
//    }
//    for(int v = 0; v < graph.vexnum; v++) {
//        if(vis[v] == false) {
//            bfs(graph, v);
//        }
//    }
//}
//
//
//int main() {
//    ALGraph graph;
//    graph.vexnum = MaxVertexNum;
//    graph.arcnum = 12;             //无向图边表结点数为边的2倍
//
//    //初始化顶点的值
//    graph.vertices[0].data = 'A';
//    graph.vertices[1].data = 'B';
//    graph.vertices[2].data = 'C';
//    graph.vertices[3].data = 'D';
//    graph.vertices[4].data = 'E';
//    graph.vertices[5].data = 'F';
//
//    //构建顶点A的边表结点
//    ArcNode *edgeAB = new ArcNode();
//    edgeAB->adjvex = 1;
//    ArcNode *edgeAC = new ArcNode();
//    edgeAC->adjvex = 2;
//    //构建顶点A的邻接表
//    graph.vertices[0].first = edgeAB;
//    edgeAB->next = edgeAC;
//    edgeAC->next = NULL;
//
//    //构建顶点B的边表结点
//    ArcNode *edgeBA = new ArcNode();
//    edgeBA->adjvex = 0;
//    ArcNode *edgeBC = new ArcNode();
//    edgeBC->adjvex = 2;
//    ArcNode *edgeBD = new ArcNode();
//    edgeBD->adjvex = 3;
//    //构建顶点B的邻接表
//    graph.vertices[1].first = edgeBA;
//    edgeBA->next = edgeBC;
//    edgeBC->next = edgeBD;
//    edgeBD->next = NULL;
//
//    //构建顶点C的边表结点
//    ArcNode *edgeCA = new ArcNode();
//    edgeCA->adjvex = 0;
//    ArcNode *edgeCB = new ArcNode();
//    edgeCB->adjvex = 1;
//    ArcNode *edgeCD = new ArcNode();
//    edgeCD->adjvex = 3;
//    //构建顶点C的邻接表
//    graph.vertices[2].first = edgeCA;
//    edgeCA->next = edgeCB;
//    edgeCB->next = edgeCD;
//    edgeCD->next = NULL;
//
//    //构建顶点D的边表结点
//    ArcNode *edgeDB = new ArcNode();
//    edgeDB->adjvex = 1;
//    ArcNode *edgeDC = new ArcNode();
//    edgeDC->adjvex = 2;
//    //构建顶点D的邻接表
//    graph.vertices[3].first = edgeDB;
//    edgeDB->next = edgeDC;
//    edgeDC->next = NULL;
//
//    //构建顶点E的边表结点
//    ArcNode *edgeEF = new ArcNode();
//    edgeEF->adjvex = 5;
//    //构建顶点E的邻接表
//    graph.vertices[4].first = edgeEF;
//    edgeEF->next = NULL;
//
//    //构建顶点F的边表结点
//    ArcNode *edgeFE = new ArcNode();
//    edgeFE->adjvex = 4;
//    //构建顶点F的邻接表
//    graph.vertices[5].first = edgeFE;
//    edgeFE->next = NULL;
//
//    //输出main函数中构建的图
//    printf("图的顶点为：\n");
//    for(int i = 0; i < graph.vexnum; i++) {
//        printf("顶点%c的下标为：%d\n", graph.vertices[i].data, i);
//    }
//    printf("\n");
//    printf("图的邻接表为：\n");
//    for(int i = 0; i < graph.vexnum; i++) {
//        printf("%c->", graph.vertices[i].data);
//        for(ArcNode *p = graph.vertices[i].first; p != NULL; p = p->next) {
//            printf("%d->", p->adjvex);
//        }
//        printf("NULL\n");
//    }
//
//
//    printf("图的广度优先遍历结果为：\n");
//    bfsGraph(graph);    //广度优先搜索遍历图
//
//    return 0;
//}

////无向图邻接矩阵的深度优先遍历
//#include <bits/stdc++.h>
//using namespace std;
//
//#define MaxVertexNum 6   //以下main函数示例为6个顶点的邻接矩阵存储
//
//typedef struct {
//    char Vex[MaxVertexNum];
//    int Edge[MaxVertexNum][MaxVertexNum];
//    int vexnum, arcnum;
//}MGraph;
//
//bool vis[MaxVertexNum];
//
//void dfs(MGraph graph, int v) {
//    printf("%c\n", graph.Vex[v]);
//    vis[v] = true;
//    for(int i = 0; i < graph.vexnum; i++) {
//        if(graph.Edge[v][i] == 1 && vis[i] == false) {
//            dfs(graph, i);
//        }
//    }
//}
//
//void dfsGraph(MGraph graph) {
//    //bool数组默认初始值本身就为false，故此处循环可省略
//    for(int i = 0; i < graph.vexnum; i++) {
//        vis[i] = false;
//    }
//    for(int v = 0; v < graph.vexnum; v++) {
//        if(vis[v] == false) {
//            dfs(graph, v);
//        }
//    }
//}
//
//int main() {
//    MGraph graph;
//    graph.vexnum = MaxVertexNum;   //无向图边表结点数为边的2倍
//    graph.arcnum = 12;
//
//    //初始化顶点的值
//    graph.Vex[0] = 'A';
//    graph.Vex[1] = 'B';
//    graph.Vex[2] = 'C';
//    graph.Vex[3] = 'D';
//    graph.Vex[4] = 'E';
//    graph.Vex[5] = 'F';
//
//    //构建顶点A的边
//    graph.Edge[0][0] = 0;
//    graph.Edge[0][1] = 1;
//    graph.Edge[0][2] = 1;
//    graph.Edge[0][3] = 0;
//    graph.Edge[0][4] = 0;
//    graph.Edge[0][5] = 0;
//
//    //构建顶点B的边
//    graph.Edge[1][0] = 1;
//    graph.Edge[1][1] = 0;
//    graph.Edge[1][2] = 1;
//    graph.Edge[1][3] = 1;
//    graph.Edge[1][4] = 0;
//    graph.Edge[1][5] = 0;
//
//    //构建顶点C的边
//    graph.Edge[2][0] = 1;
//    graph.Edge[2][1] = 1;
//    graph.Edge[2][2] = 0;
//    graph.Edge[2][3] = 1;
//    graph.Edge[2][4] = 0;
//    graph.Edge[2][5] = 0;
//
//    //构建顶点D的边
//    graph.Edge[3][0] = 0;
//    graph.Edge[3][1] = 1;
//    graph.Edge[3][2] = 1;
//    graph.Edge[3][3] = 0;
//    graph.Edge[3][4] = 0;
//    graph.Edge[3][5] = 0;
//
//    //构建顶点E的边
//    graph.Edge[4][0] = 0;
//    graph.Edge[4][1] = 0;
//    graph.Edge[4][2] = 0;
//    graph.Edge[4][3] = 0;
//    graph.Edge[4][4] = 0;
//    graph.Edge[4][5] = 1;
//
//    //构建顶点F的边
//    graph.Edge[5][0] = 0;
//    graph.Edge[5][1] = 0;
//    graph.Edge[5][2] = 0;
//    graph.Edge[5][3] = 0;
//    graph.Edge[5][4] = 1;
//    graph.Edge[5][5] = 0;
//
//    //输出main函数中构建的图
//    printf("图的顶点为：\n");
//    for(int i = 0; i < graph.vexnum; i++) {
//        printf("顶点%c的下标为：%d\n", graph.Vex[i], i);
//    }
//    printf("\n");
//    printf("图的邻接矩阵为：\n");
//    printf("  A B C D E F\n");
//    for(int i = 0; i < graph.vexnum; i++) {
//        printf("%c", graph.Vex[i]);
//        for(int j = 0; j < graph.vexnum; j++) {
//            printf(" %d",graph.Edge[i][j]);
//        }
//        printf("\n");
//    }
//
//    printf("图的深度优先遍历结果为：\n");
//    dfsGraph(graph);    //深度优先搜索遍历图
//
//    return 0;
//}



////无向图邻接矩阵的广度优先遍历
//#include <bits/stdc++.h>
//using namespace std;
//
//#define MaxVertexNum 6   //以下main函数示例为6个顶点的邻接矩阵存储
//
//typedef struct {
//    char Vex[MaxVertexNum];
//    int Edge[MaxVertexNum][MaxVertexNum];
//    int vexnum, arcnum;
//}MGraph;
//
//bool vis[MaxVertexNum];
//
//void bfs(MGraph graph, int v) {
//    printf("%c\n", graph.Vex[v]);
//    vis[v] = true;
//    queue<int> q;
//    q.push(v);
//    while(q.empty() == false) {
//        int x = q.front();
//        q.pop();
//        for(int i = 0; i < graph.vexnum; i++) {
//            if(graph.Edge[x][i] == 1 && vis[i] == false) {
//                printf("%c\n", graph.Vex[i]);
//                vis[i] = true;
//                q.push(i);
//            }
//        }
//    }
//}
//
//void bfsGraph(MGraph graph) {
//    //bool数组默认初始值本身就为false，故此处循环可省略
//    for(int i = 0; i < graph.vexnum; i++) {
//        vis[i] = false;
//    }
//    for(int v = 0; v < graph.vexnum; v++) {
//        if(vis[v] == false) {
//            bfs(graph, v);
//        }
//    }
//}
//
//int main() {
//    MGraph graph;
//    graph.vexnum = MaxVertexNum;   //无向图边表结点数为边的2倍
//    graph.arcnum = 12;
//
//    //初始化顶点的值
//    graph.Vex[0] = 'A';
//    graph.Vex[1] = 'B';
//    graph.Vex[2] = 'C';
//    graph.Vex[3] = 'D';
//    graph.Vex[4] = 'E';
//    graph.Vex[5] = 'F';
//
//    //构建顶点A的边
//    graph.Edge[0][0] = 0;
//    graph.Edge[0][1] = 1;
//    graph.Edge[0][2] = 1;
//    graph.Edge[0][3] = 0;
//    graph.Edge[0][4] = 0;
//    graph.Edge[0][5] = 0;
//
//    //构建顶点B的边
//    graph.Edge[1][0] = 1;
//    graph.Edge[1][1] = 0;
//    graph.Edge[1][2] = 1;
//    graph.Edge[1][3] = 1;
//    graph.Edge[1][4] = 0;
//    graph.Edge[1][5] = 0;
//
//    //构建顶点C的边
//    graph.Edge[2][0] = 1;
//    graph.Edge[2][1] = 1;
//    graph.Edge[2][2] = 0;
//    graph.Edge[2][3] = 1;
//    graph.Edge[2][4] = 0;
//    graph.Edge[2][5] = 0;
//
//    //构建顶点D的边
//    graph.Edge[3][0] = 0;
//    graph.Edge[3][1] = 1;
//    graph.Edge[3][2] = 1;
//    graph.Edge[3][3] = 0;
//    graph.Edge[3][4] = 0;
//    graph.Edge[3][5] = 0;
//
//    //构建顶点E的边
//    graph.Edge[4][0] = 0;
//    graph.Edge[4][1] = 0;
//    graph.Edge[4][2] = 0;
//    graph.Edge[4][3] = 0;
//    graph.Edge[4][4] = 0;
//    graph.Edge[4][5] = 1;
//
//    //构建顶点F的边
//    graph.Edge[5][0] = 0;
//    graph.Edge[5][1] = 0;
//    graph.Edge[5][2] = 0;
//    graph.Edge[5][3] = 0;
//    graph.Edge[5][4] = 1;
//    graph.Edge[5][5] = 0;
//
//    //输出main函数中构建的图
//    printf("图的顶点为：\n");
//    for(int i = 0; i < graph.vexnum; i++) {
//        printf("顶点%c的下标为：%d\n", graph.Vex[i], i);
//    }
//    printf("\n");
//    printf("图的邻接矩阵为：\n");
//    printf("  A B C D E F\n");
//    for(int i = 0; i < graph.vexnum; i++) {
//        printf("%c", graph.Vex[i]);
//        for(int j = 0; j < graph.vexnum; j++) {
//            printf(" %d",graph.Edge[i][j]);
//        }
//        printf("\n");
//    }
//
//    printf("图的广度优先遍历结果为：\n");
//    bfsGraph(graph);    //广度优先搜索遍历图
//
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//
//int main() {
//    map<int, int> dic1;
//    unordered_map<int, int> dic2;
//    dic1[6] = 2;
//    dic1[3] = 1;
//    dic1[2] = 5;
//    cout << "map:" << endl;
//    //map的遍历
//    for(auto it = dic1.begin(); it != dic1.end(); ++it) {
//        cout << it->first << " " << it->second << endl;
//    }
//    dic2[6] = 2;
//    dic2[3] = 1;
//    dic2[2] = 5;
//    cout << "unordered_map" << endl;
//    //unordered_map的遍历
//    for(auto it = dic2.begin(); it != dic2.end(); ++it) {
//        cout << it->first << " " << it->second << endl;
//    }
//    return 0;
//}

////统计元素出现次数
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int a[8] = {5, 3,12,5,1,3,1,2};
//    int n = 8;
//    int count[13] = {};
//    for(int i = 0; i < n; i++) {
//        count[a[i]]++;
//    }
//    printf("数组a的值为：\n");
//    for(int i = 0; i < n; i++) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//    printf("数组count的下标以及值为：\n");
//    printf("//数组a中的值     出现的次数\n");
//    for(int i = 0; i < 13; i++) {
//        printf("%d                   %d\n", i, count[i]);
//    }
//    return 0;
//}


////统计元素出现次数
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int a[8] = {5, 3,12,5,1,3,1,2};
//    int n = 8;
//    unordered_map<int, int> dic;
//    for(int i = 0; i < n; i++) {
//        dic[a[i]]++;
//    }
//    printf("数组a的值为：\n");
//    for(int i = 0; i < n; i++) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//    printf("数组count的下标以及值为：\n");
//    printf("//数组a中的值     出现的次数\n");
//    for(auto it = dic.begin(); it != dic.end(); it++) {
//        printf("%d                      %d\n", it->first, it->second);
//    }
//    return 0;
//}

////统计元素是否出现过
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int a[8] = {5, 3,12,5,1,3,1,2};
//    int n = 8;
//    printf("数组a原来的值为：\n");
//    for(int i = 0; i < n; i++) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//
//    unordered_map<int, bool> dic;
//    for(int i = 0; i < n; i++) {
//        if(dic[a[i]] == true) {
//            a[i] = -1;
//        }else {
//            dic[a[i]] = true;
//        }
//    }
//    printf("数组a现在的值为：\n");
//    for(int i = 0; i < n; i++) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//    return 0;
//}


////两数之和
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int a[7] =  {2, 7, 11, 15, 10, 4, 9};
//    int n = 7;
//    int target = 20;
//    unordered_map<int, bool> dic;
//    int ans = 0;
//    for(int i = 0; i < n; i++) {
//        if(dic[target - a[i]] == true) {
//            ans = a[i];
//            break;
//        }
//        dic[a[i]] = true;
//    }
//    printf("数组a中和为target的两个数为：%d   %d\n", target - ans, ans);
//    return 0;
//}


////二叉树的先序，中序，后序，层次遍历
//#include <bits/stdc++.h>
//using namespace std;
//
////二叉树封装
////定义二叉树结点
//typedef struct TreeNode {
//    int val;
//    struct TreeNode *left, *right;
//}TreeNode, *Tree;
//
////按照先序遍历顺序输入二叉树的序列，遇到空指针输入小写的null
//queue<string> input() {
//    queue<string> q;
//    string s;
//    while(true) {
//        cin >> s;
//        q.push(s);
//        if(getchar() == '\n') break;
//    }
//    return q;
//}
//
////建立二叉树
//Tree createTree(queue<string>& q) {
//    if(q.front() == "null") {
//        q.pop();
//        return NULL;
//    }
//    TreeNode *root = (TreeNode*) malloc(sizeof(TreeNode));
//    root->val = stoi(q.front());
//    q.pop();
//    root->left = createTree(q);
//    root->right = createTree(q);
//    return root;
//}
//
//
//
//
//
////先序遍历
//void preorder(Tree root) {
//    if(root == NULL) return;
//    printf("%d ", root->val);
//    preorder(root->left);
//    preorder(root->right);
//}
//
//
////中序遍历
//void inorder(Tree root) {
//    if(root == NULL) return;
//    inorder(root->left);
//    printf("%d ", root->val);
//    inorder(root->right);
//}
//
//
////后序遍历
//void postorder(Tree root) {
//    if(root == NULL) return;
//    postorder(root->left);
//    postorder(root->right);
//    printf("%d ", root->val);
//}
//
//
////层次遍历
//void levelorder(Tree root) {
//    queue<TreeNode*> q;
//    if(root != NULL) {
//        q.push(root);
//    }
//    while(q.empty() == false) {
//        TreeNode *node = q.front();
//        q.pop();
//        printf("%d ", node->val);
//        if(node->left != NULL) q.push(node->left);
//        if(node->right != NULL) q.push(node->right);
//    }
//}
//
//
//
//int main() {
//    queue<string> q = input();
//    Tree root = createTree(q);
//    printf("该二叉树的先序遍历为：\n");
//    preorder(root);
//    printf("\n");
//
//
//    printf("该二叉树的中序遍历为：\n");
//    inorder(root);
//    printf("\n");
//
//
//    printf("该二叉树的后序遍历为：\n");
//    postorder(root);
//    printf("\n");
//
//
//    printf("该二叉树的层次遍历为：\n");
//    levelorder(root);
//    printf("\n");
//
//    return 0;
//}




////求所有根节点到叶子结点的路径
//#include <bits/stdc++.h>
//using namespace std;
//
//
////二叉树封装
////定义二叉树结点
//typedef struct TreeNode {
//    int val;
//    struct TreeNode *left, *right;
//}TreeNode, *Tree;
//
////按照先序遍历顺序输入二叉树的序列，遇到空指针输入小写的null
//queue<string> input() {
//    queue<string> q;
//    string s;
//    while(true) {
//        cin >> s;
//        q.push(s);
//        if(getchar() == '\n') break;
//    }
//    return q;
//}
//
////建立二叉树
//Tree createTree(queue<string>& q) {
//    if(q.front() == "null") {
//        q.pop();
//        return NULL;
//    }
//    TreeNode *root = (TreeNode*) malloc(sizeof(TreeNode));
//    root->val = stoi(q.front());
//    q.pop();
//    root->left = createTree(q);
//    root->right = createTree(q);
//    return root;
//}
//
//
//vector<vector<int>> res;
//vector<int> path;
//
//void recur(Tree root) {
//    if(root == NULL) return;
//    path.push_back(root->val);
//    if(root->left == NULL && root->right == NULL) {
//        res.push_back(path);
//    }
//    recur(root->left);
//    recur(root->right);
//    path.pop_back();
//}
//
//
//
//
//int main() {
//    queue<string> q = input();
//    Tree root = createTree(q);
//    recur(root);
//    for(int i = 0; i < res.size(); i++) {
//        for(int j = 0; j < res[i].size(); j++) {
//            printf("%d ", res[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

////找出所有从根节点到叶子结点路径总和等于给定值的路径
//#include <bits/stdc++.h>
//using namespace std;
//
//
////二叉树封装
////定义二叉树结点
//typedef struct TreeNode {
//    int val;
//    struct TreeNode *left, *right;
//}TreeNode, *Tree;
//
////按照先序遍历顺序输入二叉树的序列，遇到空指针输入小写的null
//queue<string> input() {
//    queue<string> q;
//    string s;
//    while(true) {
//        cin >> s;
//        q.push(s);
//        if(getchar() == '\n') break;
//    }
//    return q;
//}
//
////建立二叉树
//Tree createTree(queue<string>& q) {
//    if(q.front() == "null") {
//        q.pop();
//        return NULL;
//    }
//    TreeNode *root = (TreeNode*) malloc(sizeof(TreeNode));
//    root->val = stoi(q.front());
//    q.pop();
//    root->left = createTree(q);
//    root->right = createTree(q);
//    return root;
//}
//
//
//vector<vector<int>> res;
//vector<int> path;
//int sum = 0;
//int target = 22;
//
//void recur(Tree root, int target) {
//    if(root == NULL) return;
//    sum += root->val;
//    path.push_back(root->val);
//    if(root->left == NULL && root->right == NULL && sum == target) {
//        res.push_back(path);
//    }
//    recur(root->left, target);
//    recur(root->right, target);
//    sum -= root->val;
//    path.pop_back();
//}
//
//
//
//
//int main() {
//    queue<string> q = input();
//    Tree root = createTree(q);
//    recur(root, target);
//    for(int i = 0; i < res.size(); i++) {
//        for(int j = 0; j < res[i].size(); j++) {
//            printf("%d ", res[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}




////二叉树的遍历：顺序存储
//
//#include <bits/stdc++.h>
//using namespace std;
//
////初始化二叉树，根结点数组下标从1开始，故数组0号元素赋值为-1，根结点的值为10，放在数组下标为1的位置
//int binaryTree[8] = {-1,10,5,4,17,-1,-1,20};
//int root = 1;     //根结点数组下标为1
//int maxnum = 7;   //maxnum记录二叉树结点数组下标的最大值
//
////先序遍历
//void preorder(int root) {
//    if(root > maxnum || binaryTree[root] == -1) return;
//    printf("%d ", binaryTree[root]);
//    preorder(root * 2);
//    preorder(root * 2 + 1);
//}
//
//
////中序遍历
//void inorder(int root) {
//    if(root > maxnum || binaryTree[root] == -1) return;
//    inorder(root * 2);
//    printf("%d ", binaryTree[root]);
//    inorder(root * 2 + 1);
//}
//
//
////后序遍历
//void postorder(int root) {
//    if(root > maxnum || binaryTree[root] == -1) return;
//    postorder(root * 2);
//    postorder(root * 2 + 1);
//    printf("%d ", binaryTree[root]);
//}
//
//
////层次遍历
//void levelorder(int root) {
//    queue<int> q;
//    if(root <= maxnum && binaryTree[root] != -1) {
//        q.push(root);
//    }
//    while(q.empty() == false) {
//        int node = q.front();
//        q.pop();
//        printf("%d ", binaryTree[node]);
//        if(node * 2 <= maxnum && binaryTree[node * 2] != -1) q.push(node * 2);
//        if(node * 2 + 1 <= maxnum && binaryTree[node * 2 + 1] != -1) q.push(node * 2 + 1);
//    }
//}
//
//
//int main() {
//
//
//    printf("该二叉树的先序遍历为：\n");
//    preorder(root);
//    printf("\n");
//
//
//    printf("该二叉树的中序遍历为：\n");
//    inorder(root);
//    printf("\n");
//
//
//    printf("该二叉树的后序遍历为：\n");
//    postorder(root);
//    printf("\n");
//
//
//    printf("该二叉树的层次遍历为：\n");
//    levelorder(root);
//    printf("\n");
//
//    return 0;
//}


////树的先序遍历，后序遍历，层次遍历
//#include <bits/stdc++.h>
//using namespace std;
//
////树结点定义
//struct TreeNode {
//    char c;
//    vector<int> children;
//}tree[7] = {      //创建树
//        {'A', {1, 2, 3}},
//        {'B', {4,5}},
//        {'C', {}},
//        {'D', {6}},
//        {'E', {}},
//        {'F', {}},
//        {'G', {}}
//};
//
////树的先序遍历
//void preorder(int root) {
//    printf("%c ", tree[root].c);
//    for(int i = 0; i < tree[root].children.size(); i++) {
//        preorder(tree[root].children[i]);
//    }
//}
//
////树的后序遍历
//void postorder(int root) {
//    for(int i = 0; i < tree[root].children.size(); i++) {
//        postorder(tree[root].children[i]);
//    }
//    printf("%c ", tree[root].c);
//}
//
////树的层次遍历
//void levelorder(int root) {
//    queue<int> q;
//    q.push(root);
//    while(q.empty() == false) {
//        int node = q.front();
//        q.pop();
//        printf("%c ", tree[node].c);
//        for(int i = 0; i < tree[node].children.size(); i++) {
//            q.push(tree[node].children[i]);
//        }
//    }
//}
//
//
//
//
//
//int main() {
//    int root = 0;  //树的根结点存放在tree数组的0号下标
//
//    printf("该树的先序遍历为：\n");
//    preorder(root);
//    printf("\n");
//
//
//    printf("该树的后序遍历为：\n");
//    postorder(root);
//    printf("\n");
//
//
//    printf("该树的层次遍历为：\n");
//    levelorder(root);
//    printf("\n");
//
//    return 0;
//}





////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
//LinkList func(LinkList head) {
//    //链表拆分，快指针每次走两步，慢指针每次走一步，最终快指针停止的时候慢指针正好停留在中间
//    //1.若链表结点为奇数个，则快指针停止的时候慢指针停留在正中间；2.若链表结点为偶数个，则快指针停止的时候慢指针停留在中间靠左的位置
//    //如：1 2 3 4 5 6 链表结点为6个时，慢指针会停留在3结点的位置
//    LNode *fast = head, *slow = head;
//    while(fast != NULL && fast->next != NULL) {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    LNode *head2 = slow->next;
//    //以下为反转链表模板，只不过是用slow指针来充当后半段链表的头结点
//    slow->next = NULL;
//    LNode *cur = head2, *temp;
//    while(cur) {
//        temp = cur->next;
//        cur->next = slow->next;
//        slow->next = cur;
//        cur = temp;
//    }
//    head2 = slow->next;
//    //将链表分为左右两部分，右半部分已反转
//    slow->next = NULL;
//    cur = head;
//    LNode *p = head->next, *q = head2;
//    while(q != NULL) {
//        cur->next = p;
//        p = p->next;
//        cur = cur->next;
//        cur->next = q;
//        q = q->next;
//        cur = cur->next;
//    }
//    cur->next = p;   //额外处理前半条链表多一个结点的情况
//    return head;
//}
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束
//    LinkList head = createLinkList();  //创建链表
//    printf("原来的链表为：\n");
//    printLinkList(head);               //打印原链表
//    head = func(head);                 //执行链表所需的操作
//    printf("现在的链表为：\n");
//    printLinkList(head);               //打印现链表
//    return 0;
//}



//#include <bits/stdc++.h>
//using namespace std;
//
//void func(int a[], int n) {
//    for(int i = 0, j = n - 1; i < j; i++, j--) {
//        swap(a[i], a[j]);
//    }
//}
//
//int main() {
//    int a[8] = {1,2,3,4,5,6,7,8};
//    int n = 8;
//    func(a, n);
//    for(int i = 0; i < n; i++) {
//        printf("%d ", a[i]);
//    }
//    return 0;
//}



////快速排序
//#include <bits/stdc++.h>
//using namespace std;
//
//int partition(int a[], int left, int right) {
//    int pivot = a[left];
//    while(left < right) {
//        while(left < right && a[right] >= pivot) right--;
//        a[left] = a[right];
//        while(left < right && a[left] <= pivot) left++;
//        a[right] = a[left];
//    }
//    a[left] = pivot;
//    return left;
//}
//
//void quickSort(int a[], int left, int right) {
//    if(left >= right) return;
//    int pivotpos = partition(a, left, right);
//    quickSort(a, left, pivotpos - 1);
//    quickSort(a, pivotpos + 1, right);
//}
//
//int main() {
//    int a[8] = {9,8,7,6,5,4,3,2};
//    int n = 8;
//    quickSort(a, 0, n - 1);
//    for(int i = 0; i < n; i++) {
//        printf("%d ", a[i]);
//    }
//    return 0;
//}


//合并两个有序数组
//#include <bits/stdc++.h>
//using namespace std;
//
//void merge(int a[], int m, int b[], int n, int c[]) {
//    int i = 0, j = 0, k = 0;
//    while(i < m && j < n) {
//        if(a[i] < b[j]) {
//            c[k++] = a[i++];
//        }else {
//            c[k++] = b[j++];
//        }
//    }
//    while(i < m) c[k++] = a[i++];
//    while(j < n) c[k++] = b[j++];
//}
//
//int main() {
//    int a[] = {1, 4, 5, 9, 10, 11};
//    int b[] = {2, 6, 7, 8};
//    int m = 6;
//    int n = 4;
//    int c[m + n];
//    merge(a, m, b, n, c);
//    for(int i = 0; i < m + n; i++) {
//        printf("%d ", c[i]);
//    }
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int a[7] = {5, 3, 8, 4, 2,9, 1};
//const int n = 7;
//int temp[n];
//
//void mergeSort(int a[], int left, int right) {
//    if(left >= right) return;
//    int mid = (left + right) / 2;
//    mergeSort(a, left, mid);
//    mergeSort(a, mid + 1, right);
//    int i = left, j = mid + 1, k = left;
//    while(i <= mid && j <= right) {
//        if(a[i] < a[j]) {
//            temp[k++] = a[i++];
//        }else {
//            temp[k++] = a[j++];
//        }
//    }
//    while(i <= mid) temp[k++] = a[i++];
//    while(j <= right) temp[k++] = a[j++];
//    for(int x = left; x <= right; x++) {
//        a[x] = temp[x];
//    }
//}
//
//int main() {
//    mergeSort(a, 0, n - 1);
//    for(int i = 0; i < n; i++) {
//        printf("%d ", a[i]);
//    }
//    return 0;
//}


//#include <bits/stdc++.h>
//using namespace std;
//
//int binarySearch(int a[], int n, int target) {
//    int left = 0, right = n - 1;
//    while(left <= right) {
//        int mid = (left + right) / 2;
//        if(a[mid] == target) {
//            return mid;
//        }else if(a[mid] < target) {
//            left = mid + 1;
//        }else {
//            right = mid - 1;
//        }
//    }
//    return -1;
//}
//
//int main() {
//    int a[7] = {1,3,4,6,8,9,13};
//    int n = 7;
//    int target = 4;
//    int res = binarySearch(a, n, target);
//    printf("元素target在数组a中的下标为：%d\n", res);
//    return 0;
//}




////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
//LinkList func(LinkList head) {
//    LNode *cur = head->next, *temp;
//    head->next = NULL;
//    while(cur != NULL) {
//        temp = cur->next;
//        cur->next = head->next;
//        head->next = cur;
//        cur = temp;
//    }
//    return head;
//}
//
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束
//    LinkList head = createLinkList();  //创建链表
//    printf("原来的链表为：\n");
//    printLinkList(head);               //打印原链表
//    head = func(head);                 //执行链表所需的操作
//    printf("现在的链表为：\n");
//    printLinkList(head);               //打印现链表
//    return 0;
//}


////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
////int func(LinkList list, int k) {
////    LNode *fast = list, *slow = list;
////    for(int i = 0; i < k && fast != NULL; i++) {
////        fast = fast->next;
////    }
////    if(fast == NULL) return 0;
////    while(fast != NULL) {
////        fast = fast->next;
////        slow = slow->next;
////    }
////    printf("%d\n", slow->val);
////    return 1;
////}
//
//int func(LinkList list, int k) {
//    LNode *fast = list, *slow = list;
//    while(fast != NULL) {
//        if(k-- <= 0) slow = slow->next;
//        fast = fast->next;
//    }
//    if(slow == list) return 0;
//    printf("%d\n", slow->val);
//    return 1;
//}
//
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束
//    LinkList head = createLinkList();  //创建链表
//    int k = 5;
//    printf("原来的链表为：\n");
//    printLinkList(head);               //打印原链表
//    int ans = func(head, k);                 //执行链表所需的操作
//    printf("%d\n", ans);
//    return 0;
//}



////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
//LinkList func(LinkList head, int k) {
//    LNode *fast = head, *slow = slow;
//    while(fast != NULL) {
//        if(k-- < 0) slow = slow->next;
//        fast = fast->next;
//    }
//    slow->next = slow->next->next;
//    return head;
//}
//
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束
//    LinkList head = createLinkList();  //创建链表
//    int k = 4;
//    printf("原来的链表为：\n");
//    printLinkList(head);               //打印原链表
//    head = func(head, k);                 //执行链表所需的操作
//    printf("现在的链表为：\n");
//    printLinkList(head);               //打印现链表
//    return 0;
//}


////2012相交链表
////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    char data;
//    struct LNode *next;
//    LNode() {};
//    LNode(char c) : data(c) {};
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
//
////计算链表长度（不包括头结点）
//int lenList(LinkList head) {
//    LNode *cur = head->next;
//    int len = 0;
//    while(cur != NULL) {
//        len++;
//        cur = cur->next;
//    }
//    return len;
//}
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
//LinkList func(LinkList str1, LinkList str2) {
//    int len1 = lenList(str1);
//    int len2 = lenList(str2);
//    LNode *p, *q;
//    for(p = str1; len1 > len2; len1--) {
//        p = p->next;
//    }
//    for(q = str2; len1 < len2; len2--) {
//        q = q->next;
//    }
//    while(p != q) {     //若两条链表无交点，最终p和q都等于NULL退出循环
//        p = p->next;
//        q = q->next;
//    }
//    return p;
//}
//
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    LNode *str1 = new LNode(), *str2 = new LNode();  //创建题目中的链表
//    LNode *l = new LNode('l');
//    LNode *o = new LNode('o');
//    LNode *a = new LNode('a');
//    LNode *d = new LNode('d');
//    LNode *i = new LNode('i');
//    LNode *n = new LNode('n');
//    LNode *g = new LNode('g');
//    LNode *b = new LNode('b');
//    LNode *e = new LNode('e');
//    str1->next = l;
//    l->next = o;
//    o->next = a;
//    a->next = d;
//    d->next = i;
//    i->next = n;
//    n->next = g;
//    g->next = NULL;
//    str2->next = b;
//    b->next = e;
//    e->next = i;
//
//    LNode *res = func(str1, str2);
//    if(res == NULL) {
//        printf("两条链表没有交点\n");
//    }else {
//        printf("两条链表交点处的值为：%c\n",res->data);
//    }
//    return 0;
//}




////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
////LinkList func(LinkList head) {
////    unordered_map<int, bool> dic;
////    LNode *cur = head->next, *temp = head;
////    while(cur != NULL) {
////        if(dic[abs(cur->val)] == true) {
////            cur = cur->next;
////            temp->next = temp->next->next;
////        }else {
////            dic[abs(cur->val)] = true;
////            temp = cur;
////            cur = cur->next;
////        }
////    }
////    return head;
////}
//
//
//
//
//LinkList func(LinkList head) {
//    unordered_map<int, bool> dic;
//    LNode *cur = head;
//    while(cur->next != NULL) {
//        if(dic[abs(cur->next->val)] == true) {
//            cur->next = cur->next->next;
//        }else {
//            dic[abs(cur->next->val)] = true;
//            cur = cur->next;
//        }
//    }
//    return head;
//}
//
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束
//    LinkList head = createLinkList();  //创建链表
//    printf("原来的链表为：\n");
//    printLinkList(head);               //打印原链表
//    head = func(head);                 //执行链表所需的操作
//    printf("现在的链表为：\n");
//    printLinkList(head);               //打印现链表
//    return 0;
//}


////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
//LinkList func(LinkList head) {
//    LNode *fast = head, *slow = head;
//    while(fast != NULL && fast->next != NULL) {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    LNode *cur = slow->next, *temp;
//    slow->next = NULL;
//    while(cur != NULL) {
//        temp = cur->next;
//        cur->next = slow->next;
//        slow->next = cur;
//        cur = temp;
//    }
//    LNode *q = slow->next;
//    slow->next = NULL;
//    LNode *p = head->next;
//    cur = head;
//    while(q != NULL) {
//        cur->next = p;
//        p = p->next;
//        cur = cur->next;
//        cur->next = q;
//        q = q->next;
//        cur = cur->next;
//    }
//    cur->next = p;
//    return head;
//}
//
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束
//    LinkList head = createLinkList();  //创建链表
//    printf("原来的链表为：\n");
//    printLinkList(head);               //打印原链表
//    head = func(head);                 //执行链表所需的操作
//    printf("现在的链表为：\n");
//    printLinkList(head);               //打印现链表
//    return 0;
//}




////链表封装
//#include <bits/stdc++.h>
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
//bool func(LinkList head) {
//    LNode *fast = head, *slow = head;
//    while(fast != NULL && fast->next != NULL) {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    LNode *cur = slow->next, *temp;
//    slow->next = NULL;
//    while(cur != NULL) {
//        temp = cur->next;
//        cur->next = slow->next;
//        slow->next = cur;
//        cur = temp;
//    }
//    LNode *q = slow->next;
//    slow->next = NULL;
//    LNode *p = head->next;
//    while(q != NULL) {
//        if(p->val != q->val) return false;
//        p = p->next;
//        q = q->next;
//    }
//    return true;
//}
//
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束
//    LinkList head = createLinkList();  //创建链表
//    printf("原来的链表为：\n");
//    printLinkList(head);               //打印原链表
//    bool flag = func(head);                 //执行链表所需的操作
//    if(flag == true) {
//        cout << "是回文链表" << endl;
//    }else {
//        cout << "不是回文链表" << endl;
//    }
//    return 0;
//}



////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
//LinkList func(LinkList head1, LinkList head2) {
//    LNode *head = new LNode();
//    LNode *p = head1->next, *q = head2->next, *cur = head;
//    while(p != NULL && q != NULL) {
//        if(p->val < q->val) {
//            cur->next = p;
//            p = p->next;
//        }else {
//            cur->next = q;
//            q = q->next;
//        }
//        cur = cur->next;
//    }
//    cur->next = p != NULL ? p : q;
//    return head;
//}
//
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束
//    LinkList head1 = createLinkList();  //创建链表
//    printf("原来的链表1为：\n");
//    printLinkList(head1);               //打印原链表
//    LinkList head2 = createLinkList();  //创建链表
//    printf("原来的链表2为：\n");
//    printLinkList(head2);
//    LNode *head = func(head1, head2);                 //执行链表所需的操作
//    printf("现在的链表为：\n");
//    printLinkList(head);               //打印现链表
//    return 0;
//}



////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
//LinkList merge(LinkList head1, LinkList head2) {
//    LNode *head = new LNode();
//    LNode *p = head1->next, *q = head2->next, *cur = head;
//    while(p != NULL && q != NULL) {
//        if(p->val < q->val) {
//            cur->next = p;
//            p = p->next;
//        }else {
//            cur->next = q;
//            q = q->next;
//        }
//        cur = cur->next;
//    }
//    cur->next = p != NULL ? p : q;
//    return head;
//}
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
//LinkList sortList(LinkList head) {
//    if(head->next == NULL || head->next->next == NULL) return head;
//    LNode *fast = head, *slow = head;
//    while(fast != NULL && fast->next != NULL) {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    LNode *temp = slow->next;
//    slow->next = NULL;
//    LNode *head2 = new LNode();
//    head2->next = temp;
//    return merge(sortList(head), sortList(head2));
//}
//
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束
//    LinkList head = createLinkList();  //创建链表
//    printf("原来的链表为：\n");
//    printLinkList(head);               //打印原链表
//    head = sortList(head);                 //执行链表所需的操作
//    printf("现在的链表为：\n");
//    printLinkList(head);               //打印现链表
//    return 0;
//}


////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//    LNode() {};
//    LNode(int x) : val(x) {};
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
//
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
////链表找环入口
//LNode* func(LinkList head) {
//    unordered_map<LNode*, bool> dic;
//    LNode *cur = head->next;
//    while(cur != NULL) {
//        if(dic[cur] == true) {
//            return cur;
//        }else {
//            dic[cur] = true;
//        }
//        cur = cur->next;
//    }
//    return NULL;
//}
//
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    LNode *head = new LNode(0);
//    LNode *node1 = new LNode(1);
//    LNode *node2 = new LNode(2);
//    LNode *node3 = new LNode(3);
//    LNode *node4 = new LNode(4);
//    LNode *node5 = new LNode(5);
//    head->next = node1;
//    node1->next = node2;
//    node2->next = node3;
//    node3->next = node4;
//    node4->next = node5;
//    node5->next = node3;
//    LNode *res = func(head);
//    if(res == NULL) {
//        printf("链表不存在环");
//    }else {
//        printf("%d", res->val);
//    }
//    return 0;
//}




////二叉树的遍历：顺序存储
//
//#include <bits/stdc++.h>
//using namespace std;
//
////初始化二叉树，根结点数组下标从1开始，故数组0号元素赋值为-1，根结点的值为10，放在数组下标为1的位置
//int binaryTree[8] = {-1,10,5,4,17,-1,-1,20};
//int root = 1;     //根结点数组下标为1
//int maxnum = 7;   //maxnum记录二叉树结点数组下标的最大值
//
////先序遍历
//void preorder(int root) {
//    if(root > maxnum || binaryTree[root] == -1) return;
//    printf("%d ", binaryTree[root]);
//    preorder(root * 2);
//    preorder(root * 2 + 1);
//}
//
//
////中序遍历
//void inorder(int root) {
//    if(root > maxnum || binaryTree[root] == -1) return;
//    inorder(root * 2);
//    printf("%d ", binaryTree[root]);
//    inorder(root * 2 + 1);
//}
//
//
////后序遍历
//void postorder(int root) {
//    if(root > maxnum || binaryTree[root] == -1) return;
//    postorder(root * 2);
//    postorder(root * 2 + 1);
//    printf("%d ", binaryTree[root]);
//}
//
//
////层次遍历
//void levelorder(int root) {
//    queue<int> q;
//    if(root <= maxnum && binaryTree[root] != -1) {
//        q.push(root);
//    }
//    while(q.empty() == false) {
//        int node = q.front();
//        q.pop();
//        printf("%d ", binaryTree[node]);
//        if(node * 2 <= maxnum && binaryTree[node * 2] != -1) q.push(node * 2);
//        if(node * 2 + 1 <= maxnum && binaryTree[node * 2 + 1] != -1) q.push(node * 2 + 1);
//    }
//}
//
//
//int main() {
//
//
//    printf("该二叉树的先序遍历为：\n");
//    preorder(root);
//    printf("\n");
//
//
//    printf("该二叉树的中序遍历为：\n");
//    inorder(root);
//    printf("\n");
//
//
//    printf("该二叉树的后序遍历为：\n");
//    postorder(root);
//    printf("\n");
//
//
//    printf("该二叉树的层次遍历为：\n");
//    levelorder(root);
//    printf("\n");
//
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
////void func(int& a, int& b) {
////    int temp = a;
////    a = b;
////    b = temp;
////}
//
//void func(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//int main() {
//    int a = 1, b = 2;
//    func(&a, &b);
//    cout << a << endl;
//    cout << b << endl;
//    return 0;
//}



//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//#include <queue>          //使用c++中的队列
//#include <iostream>
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
//
////二叉树封装
////定义二叉树结点
//typedef struct TreeNode {
//    int val;
//    struct TreeNode *left, *right;
//}TreeNode, *Tree;
//
//
//
////按照先序遍历顺序输入二叉树的序列，遇到空指针输入小写的null
//queue<string> input() {
//    queue<string> q;
//    string s;
//    while(true) {
//        cin >> s;
//        q.push(s);
//        if(getchar() == '\n') break;
//    }
//    return q;
//}
//
//Tree createTree(queue<string>& q) {
//    if(q.front() == "null") {
//        q.pop();
//        return NULL;
//    }
//    TreeNode *root = (TreeNode*) malloc(sizeof(TreeNode));
//    root->val = stoi(q.front());
//    q.pop();
//    root->left = createTree(q);
//    root->right = createTree(q);
//    return root;
//}
//
//
//void find(Tree root, int x) {
//    static int flag = 0;
//    if(root != NULL) {
//        if(root->val == x) flag = 1;
//        if(flag != 1) find(root->left, x);
//        if(flag != 1) find(root->right, x);
//        if(flag == 1) printf("%d ", root->val);
//    }
//}
//
//
//
//
//
//int main() {
//    //测试用例：+ * 41 null null 25 null null / 30 null null + 15 null null 2 null null
//    queue<string> q = input();
//    Tree root = createTree(q);
//    int x = 5;
//    find(root, x);
//    return 0;
//}



//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n = 10;
//    vector<vector<int>> temp;
//    temp.resize(n);
//    srand(time(0));
//    for(int i = 0; i < n; i++) {
//        for(int j = 0; j < n; j++) {
//            int x = rand() % 100 + 1;
//            temp[i].push_back(x);
//            cout << x << "  ";
//        }
//        cout << endl;
//    }
//    cout << "=============================" << endl;
//    double p = 0;
//    int count = 0;
//    for(int i = 0; i < n; i++) {
//        for(int j = 0; j < n; j++) {
//            if(temp[i][j] > 5) {
//                count++;
//            }
//        }
//    }
//    p = count * 1.0 / (n * n);
//    cout << p << endl;
////    srand(time(0));
////    cout << rand() % 100 + 1 << endl;
//    return 0;
//}



//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    double div = 0;
//    double Constant = 1000.0;
//    int size = 10;
//    double skew = 1.2;
//
//    for(int i = 1; i <= size;i++) {
//        int num = (Constant / pow(i, skew));
//        cout << num << " ";
//        div += num;
//    }
//
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//#define N 999999
//
//int generate(int n, double skew) {
//    vector<double> tmp(n);
//    for(int i = 1; i <= n; ++i) {
//        tmp[i - 1] = 1.0 /(pow(i, skew));
//    }
//    cout << "tmp频率数组：" << endl;
//    for(int i = 0; i < tmp.size(); ++i) {
//        cout << tmp[i] << " ";
//    }
//    cout << endl;
//    double sum = 0.0;
//    vector<double> v(n + 1);
//    v[0] = sum;
//    for(int i = 1; i <= n; i++) {
//        sum += tmp[i - 1];
//        v[i] = sum;
//    }
//    cout << "v累计频率数组：" << endl;
//    for(int i = 0; i < v.size(); ++i) {
//        cout << v[i] << " ";
//    }
//    cout << endl;
//    vector<double> arr(n + 1);
//    for(int i = 0; i <= n; ++i) {
//        arr[i] = v[i] / v[n];
//    }
//    cout << "arr概率数组：" << endl;
//    for(int i = 0; i < arr.size(); ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//    srand(time(0));
//    int x = rand();
//    cout << "rand-x " << x << endl;
//    double target = rand() % (N + 1) / (float)(N + 1);
//    cout << "rand-target " << target << endl;
//    return upper_bound(arr.begin(), arr.end(), target) - arr.begin();
//}
//
//int main() {
//    int n = 10;
//    double skew = 0.0;
//    int x = generate(n, skew);
//    cout << x << endl;
//    return 0;
//}



//abs(),max(),min(),swap()


//LinkList func(LinkList head, int n) {
//    int temp[n + 1] = {0};
//    //int *temp = (int*)malloc(sizeof(int) * n);
//    LinkNode *cur = head;
//    while(cur->next != NULL) {
//        if(temp[abs(cur->next->val)] != 0) {
//            ListNode *r = cur->next;
//            cur->next = cur->next->next;
//            free(r);
//        }else {
//            temp[abs(cur->next->val)] = 1;
//            cur = cur->next;
//        }
//    }
//    return head;
//}
//
//
//LinkList reverse(LinkList head) {
//    ListNode *cur = head->next, *temp;
//    head->next = NULL;
//    while(cur != NULL) {
//        temp = cur->next;
//        cur->next = head->next;
//        head->next = cur;
//        cur = temp;
//    }
//    return head;
//}


////链表封装
//#include <stdio.h>     //scanf和printf的头文件
//#include <malloc.h>    //malloc函数的头文件
//#include <stdbool.h>   //使用true或者false需要的头文件
//#include <stdlib.h>    //求绝对值abs()函数的头文件
//#include <unordered_map>  //使用c++中的unordered_map所需要的头文件
//using namespace std;      //使用域名空间std，否则后续使用unordered_map必须写为std :: unordered_map<>
//
////定义链表结点
//typedef struct LNode {
//    int val;
//    struct LNode *next;
//}LNode, *LinkList;  //LNode表示链表结点，LinkList等价于LNode*，用头结点表示整条链表
//
////创建链表，依次输入不同结点的值，用空格隔开，最后输入回车表示链表输入完成
////以下创建链表带有头结点，且头结点赋值为0
//LinkList createLinkList() {
//    LinkList head = (LNode*)malloc(sizeof(LNode));  //创建头结点
//    head->val = 0;        //头结点赋值为0
//    LNode *tail = head;   //创建尾指针，尾指针执行最后一个结点，顺序往链表后面添加结点，尾插法
//    int x;
//    while(true) {
//        scanf("%d", &x);
//        LNode *node = (LNode*) malloc(sizeof(LNode));    //创建链表结点
//        node->val = x;                                        //链表结点赋值
//        tail->next = node;     //将新创建的结点添加到原来的尾结点后面
//        tail = node;           //将新插入的结点修改为尾结点
//        if(getchar() == '\n') break;
//    }
//    tail->next = NULL;         //创建链表完成，最后一个结点的next指针需设置为NULL
//    return head;
//}
//
////依次打印链表中每个结点的值（包括头结点，其值为0），最后打印完毕时换行
//void printLinkList(LinkList head) {
//    LNode *cur = head;
//    while(cur != NULL) {
//        printf("%d ", cur->val);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
////不同类型的链表题目只需修改func函数的参数以及返回值就行
//LinkList func(LinkList head) {
//    //链表拆分，快指针每次走两步，慢指针每次走一步，最终快指针停止的时候慢指针正好停留在中间
//    //1.若链表结点为奇数个，则快指针停止的时候慢指针停留在正中间；2.若链表结点为偶数个，则快指针停止的时候慢指针停留在中间靠左的位置
//    //如：1 2 3 4 5 6 链表结点为6个时，慢指针会停留在3结点的位置
//    LNode *fast = head, *slow = head;
//    while(fast != NULL && fast->next != NULL) {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    //LNode *head2 = slow->next;
//    //以下为反转链表模板，只不过是用slow指针来充当后半段链表的头结点
//    LNode *cur = slow->next, *temp;
//    slow->next = NULL;
//
//    while(cur) {
//        temp = cur->next;
//        cur->next = slow->next;
//        slow->next = cur;
//        cur = temp;
//    }
//    LNode *head2 = slow->next;
//    //将链表分为左右两部分，右半部分已反转
//    slow->next = NULL;
//    cur = head;
//    LNode *p = head->next, *q = head2;
//    while(q != NULL) {
//        cur->next = p;
//        p = p->next;
//        cur = cur->next;
//        cur->next = q;
//        q = q->next;
//        cur = cur->next;
//    }
//    cur->next = p;   //额外处理前半条链表多一个结点的情况
//    return head;
//}
//
////main函数封装，首先创建链表，创建完毕打印链表
////不同类型的链表题目只需修改func函数的参数、返回值以及具体实现就行
//int main() {
//    //依次输入链表结点的值（默认已带头结点，其值为0，不需要输入头结点的值），用空格隔开，以回车结束
//    LinkList head = createLinkList();  //创建链表
//    printf("原来的链表为：\n");
//    printLinkList(head);               //打印原链表
//    head = func(head);                 //执行链表所需的操作
//    printf("现在的链表为：\n");
//    printLinkList(head);               //打印现链表
//    return 0;
//}




//void inorder(SqBiTree tree, int root, int a[], int& i) {
//    if(tree.SqBiTNode[root] == -1 && root >= tree.ElemNum) return;
//    inorder(tree, root * 2 + 1, a, i);
//    a[i++] = tree.SqBiTNode[root];
//    inorder(tree, root * 2 + 2, a, i);
//}
//
//bool func(SqBiTree tree) {
//    int a[MAX_SIZE];
//    int i = 0;
//    inorder(tree, 0, a, i);
//    for(int j = 0; j <= tree.ElemNum - 2; j++) {
//        if(a[j] > a[j + 1]) return false;
//    }
//    return true;
//}
//
//
//int x = INT_MIN;
//bool flag = true;
//
//void inorder(SqBiTree tree, int root) {
//    if(tree.SqBiTNode[root] == -1 && root >= tree.ElemNum) return;
//    inorder(tree, root * 2 + 1);
//    if(tree.SqBiTNode[root] < x) {
//        flag = false;
//    }
//    x = tree.SqBiTNode[root];
//    inorder(tree, root * 2 + 2);
//}
//
//bool func(SqBiTree tree, int root) {
//    inorder(tree, root);
//    return flag;
//}

