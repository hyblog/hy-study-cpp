/*
 * typeid()表达式，作用是获取一个表达式类型
 */

#include <iostream>

using namespace std;

//常量类型
#define DEFINE_ONEC '1'
const int CONST_ONCE = 1;

//共用体类型
union Union_var
{
    char e = 'a';
};

//结构体类型
struct Struct_var
{
    char a = 'a';
    int  b = 1;
};

//枚举类型
enum Enum_var
{
    ENUM_ONE = 1,
    ENUM_TWO = 2
};

//链表
struct Listed_var
{
    int data;
    struct Listed_var *next;
};

//方法类型
int echo_typeid()
{
    int a = 1; //int类型
    char b = '2'; //字符类型
    char c[20] = "hello world"; //字符串类型
    float d = 3.14; //浮点数类型
    char *pB = &b; //指针类型

    //链表类型
    struct Listed_var list2 = {1, NULL};
    struct Listed_var list1 = {2, &list2};
    struct Listed_var *head = &list1;
    while (head != NULL)
    {
        cout << "链表值：" << head->data << endl;
        head = head->next;
    }
    free(head);
    head = NULL;

    //二维数组索引
    int ii[2][3] = {{1,2,3}, {4,5,6}};
    int (*pI)[3] = ii;
    int max_len = sizeof(ii)/ sizeof(ii[0]);
    for (int j = 0; j < max_len; ++j)
    {
        int min_len = sizeof(ii[j])/ sizeof(ii[j][0]);
        for (int k = 0; k < min_len; ++k)
        {
            cout << "二维数组指针值：" << *(*(pI+j)+k) << endl;
        }
    }

    //类型打印
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;
    cout << typeid(d).name() << endl;
    cout << typeid(pB).name() << endl;
    cout << typeid(Struct_var).name() << endl;
    cout << typeid(Union_var).name() << endl;
    cout << typeid(DEFINE_ONEC).name() << endl;
    cout << typeid(CONST_ONCE).name() << endl;
    cout << typeid(enum Enum_var).name() << endl;
    cout << typeid(echo_typeid()).name() << endl;
    cout << typeid(list1).name() << endl;
    cout << typeid(pI).name() << endl;

    //指针回收
    free(pI);
    pI = NULL;

    return 0;
}