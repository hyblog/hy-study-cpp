/*
 * C++中新增的数据类型
 * 1.wchar_t，用于存放Unicode编码，char是2个字节，wchar_t是8个字节，char最大长度是2^8=256，wchar_t.len=2^16
 * 2.bool，用于存放真假值，bool只占用1个字节
 * 2.longlong，long是4个字节，long long是8个字节，long能存下2^32值，long long能存下2^64值（64位系统下没区别）
 * 3.auto，弱类型，可以用于声明任意类型
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

/*
 * C++语言-Long Long类型
 */
void echo_longlong()
{
    long a = 3212321312312; //存不下，输出0
    long long aa = 3212321312312;

    cout << "a=" << a << ",大小=" << sizeof(a) << endl;
    cout << "aa=" << aa << ",大小=" << sizeof(aa) << endl;
}

/*
 * C++语言-auto类型
 */
void echo_auto()
{
    long long int a = 2312312;
    char b = 'A';
    wchar_t d = L'黄';
    float e = 3.14f;
    float *pE = &e;
    char f[20] = "ab";

    cout << "a类型=" << typeid(a).name() << ",大小=" << sizeof(a) << endl;
    cout << "b类型=" << typeid(b).name() << ",大小=" << sizeof(b) << endl;
    cout << "d类型=" << typeid(d).name() << ",大小=" << sizeof(d) << endl;
    cout << "e类型=" << typeid(e).name() << ",大小=" << sizeof(e) << endl;
    cout << "f类型=" << typeid(f).name() << ",大小=" << sizeof(f) << endl;
    cout << "pE类型=" << typeid(pE).name() << ",大小=" << sizeof(pE) << endl;
}