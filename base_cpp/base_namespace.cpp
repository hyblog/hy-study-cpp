//
// Created by huangyan on 18/7/24.
//

/*
 * C++语言-命名空间
 */

#include <iostream>
using namespace std;

//int a = 20000;

namespace NAME_A
{
    int a = 20;
    int b = 30;
    namespace NAME_AA
    {
        int a = 200;
        int b = 300;
        //匿名空间
        namespace
        {
            int c = 2000;
        }
    }
}

namespace NAME_B
{
    int a = 10;
    int b = 10;
}

void echo_namespace()
{
    //命名空间访问形式一
    cout << NAME_A::a << endl;
    cout << NAME_A::b << endl;
    cout << NAME_B::a << endl;
    cout << NAME_B::b << endl;
    cout << NAME_A::NAME_AA::a << endl;
    cout << NAME_A::NAME_AA::b << endl;

    //命名空间访问形式二(会覆盖全局变量a的值)
    using namespace NAME_A::NAME_AA;
    cout << a << endl;

    //空间别名
    namespace FF_NAME = NAME_A::NAME_AA;

    //匿名空间
    cout << FF_NAME::c << endl;
}