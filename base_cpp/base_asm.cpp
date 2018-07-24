/*
 * C语言-__asm关键字
 * __asm关键字，可以在c/c++中调用指向汇编语言
 */

#include <iostream>
using namespace std;

void func_asm()
{
    int a = 10;
    int b = 20;
    int sum = 0;

    //汇编语言
    /*
    __asm
    {
        mov eax, a
        mov ebx, b
        lea eax,[eax + ebx]
        mov sum, eax
    }
    */
    cout << sum << endl;
}