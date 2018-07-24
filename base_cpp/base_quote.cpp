/*
 * C++语言-引用类型
 * 1.为变量起一个别名
 * 2.引用类型与指针的区别（1.不能NULL引用，2.只能初始化一次，3.不能引用引用）
 */
#include <iostream>
using namespace std;

void swap_quote(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}

void func_quote()
{
    int a = 10;
    int c = 20;
    int &b = a;

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    swap_quote(a, c);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}
