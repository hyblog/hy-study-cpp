/*
 * C++语言 运算符new delete
 * 1.c++中new delete预算符，对应c中的malloc free
 */

#include <iostream>
using namespace std;

//堆内存操作
void func_deap()
{

    //创建堆变量
    char *pA = new char;
    int *pB = new int;
    float *pF = new float(3.14f);

    *pA = 'B';
    *pB = 111;

    cout << *pA << endl;
    cout << *pB << endl;
    cout << *pF << endl;

    //创建数组堆内存
    int *pD = new int[3]{1,2,3};
    int len = sizeof(pD)/ sizeof(pD[0]);
    for (int j = 0; j < len; ++j)
    {
        cout << pD[j] << endl;
    }

    //删除堆变量
    delete pA;
    delete pB;
    delete pF;
    delete []pD;
}