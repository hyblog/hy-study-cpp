/*
 * C++中新增的数据类型
 * 1.wchar_t，用于存放Unicode编码，char是2个字节，wchar_t是8个字节，char最大长度是2^8=256，wchar_t.len=2^16
 * 2.bool，用于存放真假值，bool只占用1个字节
 * 2.longlong
 * 3.auto
 */

#include <iostream>
using namespace std;

/**
 * C++宽字符串
 * 1.宽字符串命名用wchar_t，赋值时用L开头
 * 2.宽字符不能用cout输出，只能用wcout，输出前 需求wcout.imbue(locale("zh_CN"))进行转换
 */
void echo_wchar()
{
    //传统的字符
    char a = 'A';
    cout << "char a = " << a << endl;

    //宽字符串
    wchar_t b = L'黄';
    wchar_t c = L'A';

    //宽字符串输出需要转码
    wcout.imbue(locale("zh_CN"));
    wcout << "wchar_t b = " << b << ",sizeof=" << sizeof(b) << endl;
    wcout << "wchar_t c = " << c << ",sizeof=" << sizeof(c) << endl;

    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;
}


/*
 * C++语言-Bool类型
 * 1.0和flase为假
 * 2.非0和true真
 */
void echo_bool()
{
    bool a = true;
    bool b = false;
    bool c = 0;
    bool d = -1;

    cout << "a=" << a << ",大小=" << sizeof(a) << endl;
    cout << "b=" << b << ",大小=" << sizeof(b) << endl;
    cout << "c=" << c << ",大小=" << sizeof(c) << endl;
    cout << "d=" << d << ",大小=" << sizeof(d) << endl;
}