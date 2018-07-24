/*
 * C++语言输入输出
 */

#include <iostream> //cin cout hex
#include <iomanip> //setw setfill
using namespace std;

/*
 * cin输入，cout输出，hex 16进制，oct 8进制，dec10进制
 */
void cin_cout()
{
    int a;
    char b[20];
    float c;

    //输入
    cin >> a >> b >> c;

    //输出
    cout << setw(10) << setfill('*');
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    int d = 20;
    cout << hex << d << endl;
    cout << dec << d << endl;
    cout << oct << d << endl;
    cout << setw(10) << setfill('*') << endl;

}