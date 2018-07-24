#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <string.h>

/**
 * Hello World
 */
void hello_c()
{
    printf("Hello C!\n");
    return;
}

/**
 * C语言－数据类型
 * 1、基本类型，它是算数类型，包括2种类型：整数类型和浮点类型；
 * 2、枚举类型，它是算数类型，被定义在程序中只能赋予一些离散整数值的变量；
 * 3、void类型，表明没有可用值
 * 4、派生类型，包含：指针类型、数组类型、结构类型、共用体类型和函数类型；
 */

/**
 * C语言－整数类型
 * 类型           存储大小
 * char             1字节
 * unsigned char    1字节
 * signed char      1字节
 * int              2~4字节
 * unsigned int     2~4字节
 * short            2字节
 * unsigned short   2字节
 * long             4字节
 * unsigned long    4字节
 */
int integer_size()
{
    printf("char 存储大小：%lu\n", sizeof(char));
    printf("unsigned char 存储大小：%lu\n", sizeof(unsigned char));
    printf("signed char 存储大小：%lu\n", sizeof(signed char));
    printf("int 存储大小：%lu\n", sizeof(int));
    printf("unsigned int 存储大小：%lu\n", sizeof(unsigned int));
    printf("short 存储大小：%lu\n", sizeof(short));
    printf("unsigned short 存储大小：%lu\n", sizeof(unsigned short));
    printf("long 存储大小：%lu\n", sizeof(long));
    printf("unsigned long 存储大小：%lu\n", sizeof(unsigned long));
    return 0;
}

/**
 * C语言-浮点类型
 * 类型          存储大小
 * float         4字节
 * double        8字节
 * long double   16字节
 */
int floating_size()
{
    printf("float 存储大小：%lu\n", sizeof(float));
    printf("double 存储大小：%lu\n", sizeof(double));
    printf("long double 存储大小：%lu\n", sizeof(long double));
    // 范围值
    printf("float 最小值：%E\n", FLT_MIN);
    printf("float 最大值：%E\n", FLT_MAX);
    printf("float 精度值：%d\n", FLT_DIG);
    return 0;
}

/*
 * C语言-变量
 */
extern int i;   // 声明，并不定义

int set_variable()
{
    int i; // 声明，且定义
    i = 20;

    //整数类型
    long a = 1;
    short b = 2;
    int c = 3;

    //字符类型
    char d;
    d = 'd';

    //单双精度
    float e;
    double f;
    e = 3.13;

    printf("i=%d\n", i);
    printf("a=%ld\n", a);
    printf("b=%d\n", b);
    printf("c=%d\n", c);
    printf("d=%c\n", d);
    printf("e=%2f\n", e);
    printf("f=%2f\n", f);
    return 0;
}

/*
 * C语言-常量
 */
#define NEWLINE '\n'
const int A = 10;

int set_constant()
{
    const int B = 20;
    const int C = 20;
//    const char C = "C";
    const long int D = 10000000;
    const short E = 1;
    const float F = 3.14;
    const float G = 3.4;

    int c = A+B;

    printf("A=%d,B=%d,c=%d,E=%d,F=%f,G=%f", A,B,c,E,F,G);
    printf("%c", NEWLINE);
    return 0;
}

/*
 * C语言进制－进制转换
 * 16进制=0x10，8进制=010，10进制=10，2进制=没有表示
 * 10进制转2进制，除2取余法，读数时从下到上，根据操作系统补位数
 * 10进制转8进制，除8取余法，读数时从下到上
 * 10进制转16进制，除16取余法，读数时从下到上，10～15的数表示（A、B、C、D、E、F）
 * 2进制转10进制，第N位的2的N次方，求总和
 * 8进制转10进制，第N位的8的N次方，求总和
 * 2进制转8进制，取3和1法
 * 8进制转2进制，取1分3法
 * 2进制转16进制，取4和1法
 * 16进制转2进制，取1分3法
 * 8进制转16进制，中间法，用2进制过度，8进制是3位2进制数，16进制是4位2进制数
 * 16进制转8进制，中间法，用2进制过度，8进制是3位2进制数，16进制是4位2进制数
 */
int hex_conv()
{
    // 前缀不一样代表进制数也不一样
    printf("10进制=%d\n", 1000);
    printf("8进制=%d\n", 010);
    printf("16进制=%d\n", 0x10);

    // 进制转换实例
    int a = 250;
    char s[10];

    printf("250转8进制=%o\n", a);
    printf("250转16进制=%x\n", a);
    return 0;
}

/*
 * 运算符与操作运算符逻辑
 */
int arth_logic()
{
    // 多逗号赋值，以最后一个单元为值
    int i = 100;
    int a = (i+=10, 1*i);
    printf("a=%d\n", a);

    // 运算符操作
    printf("a=a+1=%d\n", a+1);
    printf("a=a-1=%d\n", a-1);
    printf("a=a*1=%d\n", a*1);
    printf("a=a/1=%d\n", a/1);
    printf("a=a%%1=%d\n", a%1);

    // 赋值+运算操作
    a = 100;
    printf("a=a+1=%d\n", a+=1);
    a = 100;
    printf("a=a-1=%d\n", a-=1);
    a = 100;
    printf("a=a*1=%d\n", a*=1);
    a = 100;
    printf("a=a/1=%d\n", a/=1);
    a = 100;
    printf("a=a%%1=%d\n", a%=1);

    // 真假运算符，0永远是假
    if(!0)
    {
        printf("0=false\n");
    }

    // 关系运算符
    printf("3>2=%d\n", 3>2);
    printf("3>=2=%d\n", 3>=2);
    printf("3<2=%d\n", 3<2);
    printf("3<=2=%d\n", 3<=2);
    printf("3==2=%d\n", 3==2);
    printf("3!=2=%d\n", 3!=2);

    // 逻辑运算符
    printf("真||假=%d\n", 1||0);
    printf("真&&假=%d\n", 1 && 0);
    printf("真&&真=%d\n", 1 && 1);

    // 位运算符
    int aa = 1;  // 二进制：00000001
    int bb = 2;  // 二进制：00000010
    printf("&且,位同1则1=%d\n", aa & bb);  // 00000000
    printf("|或,位有1则1=%d\n", aa | bb);  // 00000011
    printf("^非,位相反则1=%d\n", aa ^ bb); // 00000011
    printf("~反,位0则1=%d\n", ~aa);        // 11111110
    printf("<<左移,%d\n", aa << 2);        // 00000100
    printf(">>右移,%d\n", bb >> 2);        // 00000001

    // 自增、自减
    int cc = 1;
    printf("cc--自减=%d\n", cc--);
    printf("++c自增=%d\n", ++cc);

    // 三目运算符
    printf("三目运算符,0?0:1=%d\n", 0?0:1);
    return 0;
}

/*
 * C语言-输入和输出
 * %c 一个字符
 * %d 有符号的十进制整数
 * %f 浮点数
 * %i 有符号的十进制整数（与%d相同）
 * %p 指针
 * %s 字符串
 * %ld 长整形
 * %o 八进制
 * %x 十六进制小写
 * %X 十六进制大写
 */
int input_outing()
{
    int a;
    int b;
    // 输入
    scanf("%d%d", &a, &b);
    // 输出
    printf("输出A=%d, 输出B=%d\n", a, b);
    return 0;
}

/*
 * C语言-选择结构
 */
int select_structed()
{
    int a = 10;
    int b = 20;
    if (a > b)
    {
        printf("a>b\n");
    }
    else if (a < b)
    {
        printf("a<b\n");
    }
    else
    {
        printf("a=b\n");
    }

    switch (a)
    {
        case 9:
            printf("a=9\n");
            break;
        case 10:
            printf("a=10\n");
            break;
        default:
            printf("a!=9 and 10\n");
            break;
    }
    return 0;
}

/*
 * C语言-循环结构
 */
int loop_structed()
{
    // for遍历
    int sum = 0;
    for (int i=0; i<100; ++i)
    {
        sum += i;
    }
    printf("for-sum=%d\n", sum);

    // while遍历
    sum = 0;
    int len = 0;
    while (len < 100)
    {
        sum += len;
        ++len;
    }
    printf("while-sum=%d\n", sum);

    // do while遍历
    sum = 0;
    len = 0;
    do
    {
      sum += len;
      ++len;
    } while (len < 100);
    printf("do-while-sum=%d", sum);
    return 0;
}

/*
 * C语言-数组
 * 数组的下标是连续的，内存存储地址也是连续的，执行效率高
 * 可以根据数据下标快速获取对应数据
 */
int array_structed()
{
    // 一维数组
    int arr[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    for (int i = 0; i < 3; ++i)
    {
        printf("arr-下标%d=%d,内存地址=%p\n", i, arr[i], &arr[i]);
    }

    // 二维数组
    int arr1[2][3] = {{1,2,3},{4,5,6}};
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("arr1-下标%d-下标%d=%d,内存地址=%p\n", i,j,arr1[i][j],&arr1[i][j]);
        }
    }

    // 一维字符串数组
    char str[5] = {'h','e','l','l','o'};
    for (int i = 0; i < sizeof(str); ++i)
    {
        printf("str-下标%d=%c,内存地址=%p\n", i,str[i],&str[i]);
    }

    // 字符串形式输出，字符串数组尾部默认加\0表示字符串结束符
    printf("str=%s\n", str);
    char str1[6] = "hello";
    printf("str1=%s\n", str1);
    return 0;
}

/*
 * C语言-函数
 * .h文件用于声明函数
 * .c文件实现和调用函数
 */
#include "base.h"
int func_sum(int a, int b)
{
    return a+b;
}

int func_structed()
{
    int sum = func_sum(1,2);
    printf("1+2=%d\n", sum);
    return 0;
}

/*
 * C语言-函数递归
 * 求1-100的总和
 */
int func_recursion(int n)
{
    if (n == 1)
    {
        return n;
    }
    else
    {
        return n+func_recursion(n-1);
    }
}

/*
 * C语言-变量生命周期
 */
int g = 20; //全局变量
int func_variable(int a)
{
    printf("全局变量：%d", g);
    printf("局部变量：%d", a);
    g = 30;

    { //代码块
        int b = 10;
        printf("全局变量：%d", g);
        printf("局部变量：%d", a);
        printf("局部变量：%d", b);
    }
    return 0;
}

/*
 * C语言-内存管理
 * C语言程序内存空间主要分为5大类
 * 代码段(.text)、由编译器分配，用于存放程序执行代码的一块内存区域；
 * 数据段(.data)、由编译器分配，全局数据区，用于存放全局变量、静态变量、常量，只初始化一次；
 * BBS段(.bbs)、由编译器分配，用于存放未被初始化的全局变量、静态变量；
 * 栈区(stack)、由编译器自动分配与释放，用于存放函数参数值、函数局部变量等；
 * 堆区(heap)、由程序员分配与释放，如果不释放，程序结束时由OS回收，或者内存泄漏；
 */
int gg = 1; //全局数据区
#define G_INDEX 10000 //全局数据区
const int G_GGG = 1; //全局数据区

//代码段
int free_memory(int a) //int(a)栈区
{
    static int ggg = 1; //全局数据区
    int c = 10; //栈区

    printf("%d", G_INDEX);
    printf("常量const：%d", G_GGG);
    printf("静态变量：%d", ggg);

    int *p = (int *)malloc(4); //堆区，指针变量声明
    free(p); //堆区，指针变量销毁
    return 0;
}

/*
 * C语言-指针概念
 * 指针是一种内存地址值（16进制 0x000）
 */
int finger_structed()
{
    //指针赋值与取值
    int a = 10;
    int *addrs = &a;
    int aa = *addrs;

    printf("a的值是：%d\na的地址是：%p\naa的值是：%d\naa的内存是：%p\n", a, &a, aa, &aa);
    return 0;
}

/*
 * C语言-空指针和野指针
 * void *（空类型）可以承接任何变量类型地址
 * wild *（野指针）指向一个非法或已销毁的指针地址
 */
int void_finger()
{
    //空指针
    //1.空指针可以接受任何类型的地址
    //2.使用空指针时需要强转
    int a = 0;
    char b = 'h';
    float c = 3.14f;

    void *pA = &a;
    void *pB = &b;
    void *pC = &c;

    //使用空指针前，需要强转
    int *pAA = (int *)pA;
    char *pBB = (char *)pB;
    float *pCC = (float *)pC;

    printf("pAA=%d\n", *pAA);
    printf("pBB=%c\n", *pBB);
    printf("pCC=%f\n", *pCC);

    //定义指针，设置指针空间
    int *p1 = (int *)malloc(4);
    char *p2 = (char *)malloc(2);
    float *p3 = (float *)malloc(4);

    //野指针
    //1.定义了指针，但是没有指针的值
    //2.销毁了指针的内存，但是没有清空指针的值
    int *p4 = (int *)malloc(4);
    free(p1);
    free(p2);
    free(p3);
    if (p1 != NULL)
    {
        p1 = NULL;
    }
    printf("p1的内存地址：%p", p1);
    printf("p4的内存地址：%p", p4);
    return 0;
}

/*
 * C语言-数组指针
 * 1.数组名代表了数组的首地址，&a == &a[0]
 * 2.指针操作数组，指针元素地址 == (指针地址+下标个数)
 * 3.数组名是常量，不可变，不能++ --
 * 4.指针变量是变量，可以变，能++ --
 */
int array_finger()
{
    //数组地址的关系
    int a[] = {1,2,3,4};
    int len = sizeof(a)/sizeof(a[0]);
    printf("数组a的地址=%p\n", &a);
    for(int i = 0; i < len; ++i)
    {
        printf("数组a下标%d的指针=%p\n", i, &a[i]);
    }

    //指针操作数组
    //p==指针地址，*p==指针的值
    //(p+i)==不影响p指针，p++影响p指针的地址
    int *p = a;
    for (int j = 0; j < len; ++j)
    {
        printf("数组a地址=%p,指针p地址=%p,指针p值=%d\n", &a[j], (p+j), *(p+j));
    }

    //指针数组
    int b = 10;
    printf("b指针数组地址=%p\n", &b);

    int *pArr[] = {a, &p[0], &b};
    len = sizeof(pArr)/ sizeof(pArr[0]);
    for (int k = 0; k < len; ++k)
    {
        printf("指针数组地址=%p\n", pArr[k]);
    }
    return 0;
}

/*
 * C语言-字符串指针
 */
int string_finger()
{
    char *p = "hello";
    int len = strlen(p);

    printf("字符串p地址=%p\n", p);
    for (int j = 0; j < len; j++)
    {
        printf("字符串p-下标%d的地址=%p,值=%c\n", j, (p+j), *(p+j));
    }
    return 0;
}

/*
 * C语言-指针函数
 */
int func_divi(int a, int b)
{
    return (int)a/b;
}
int func_finger()
{
    printf("divi指针函数地址=%p\n", func_divi);

    int (* pDivi)(int a, int b);
    pDivi = NULL;
    printf("pDivi指针函数地址=%p\n", pDivi);

    pDivi = func_divi;
    printf("pDivi指针函数地址=%p\n", pDivi);

    int a = 10;
    int b = 10;
    int res = pDivi(a, b);
    printf("指针函数%d/%d=%d\n", a, b, res);
}

/*
 * C语言-结构题类型
 */
//定义结构体类型
struct Student
{
    int num;
    int age;
    char name[20];
};
int struct_type()
{
    //定义结构体变量，并初始化
    struct Student stu1 = {1000000, 18, "zhangsan"};

    //先定义结构体，再赋值
    struct Student stu2;
    stu2.num = 1000001;
    stu2.age = 19;
    strcpy(stu2.name, "lisi"); //字符串属于常量，不能直接赋值，需要借助strcpy函数

    printf("姓名：%s\n", stu2.name);
    printf("年龄：%d\n", stu2.age);
    printf("编号：%d\n", stu2.num);

    //定义数组结构体
    struct Student std3[3] = {
            {100, 10, "zhangsan"},
            {101, 11, "lsi"},
            {102, 12, "wanger"}
    };

    struct Student std4[2];
    std4[0].num = 103;
    std4[0].age = 13;
    strcpy(std4[0].name, "zs");

    std4[1].num = 104;
    std4[1].age = 14;
    strcpy(std4[1].name, "ls");

    int len = sizeof(std4)/ sizeof(std4[0]);
    for(int i = 0; i < len; ++i)
    {
        printf("数组下标-%d-名称-%s-编号-%d-年龄-%d\n", i, std4[i].name, std4[i].num, std4[i].age);
    }
    return 0;
}

/*
 * C语言-结构体与结构体指针
 */
struct Stu
{
    int num;
    char name[30];
};
int struct_finger()
{
    //结构体初始化赋值
    struct Stu st1 = {10, "huangyan"};

    //指针赋值
    struct Stu *pStu1 = &st1;

    printf("姓名=%s\n", pStu1->name);
    printf("年龄=%d\n", pStu1->num);
    return 0;
}

/*
 * C语言-链表
 * 1.链表是一种非连续的存储，需要通过指针进行关联
 *
 */
//链表结构体定义
struct Listed_Data
{
    int data;
    struct Listed_Data *next = NULL;
};
int struct_listed()
{
    //结构体声明
    struct Listed_Data list;
    struct Listed_Data list1;
    struct Listed_Data list2;

    //结构体赋值
    list.data = 1;
    list1.data = 2;
    list2.data = 3;

    //链表关联
    list.next = &list1;
    list1.next = &list2;

    //链表头
    struct Listed_Data *pHead = &list;

    while(pHead != NULL)
    {
        printf("链表1=%d\n", pHead->data);
        pHead = pHead->next;
    }
    return 0;
}

/*
 * C语言-枚举类型
 * 1.枚举类型在不赋值时，值默认是从0开始
 */
enum Typeval
{
    TypeOne = 1,
    TypeTwo = 2
};
int enum_type()
{
    int a = TypeOne;
    printf("变量a=%d\n", a);
    printf("枚举=%d\n", TypeOne);
    printf("枚举=%d\n", TypeTwo);
    return 0;
}

/*
 * C语言-共用体
 * 1.一个内存地址可以存储多种数据类型
 * 2.一次只能使用一个共用体成员，成员之间互相影响
 * 3.共用体空间取决于最大成员的4被
 */
union MyUnion
{
    char a[11];
    int b;
    float c;
};
int union_type()
{
    union MyUnion myU;
    strcpy(myU.a, "hello");
    printf("a=%s\n", myU.a);

    myU.b = 1;
    printf("b=%d\n", myU.b);

    myU.c = 3.14f;
    printf("c=%f\n", myU.c);
    printf("b=%d\n", myU.b);
    printf("a=%s\n", myU.a);

    printf("myUnionSize=%lu", sizeof(union MyUnion));
    return 0;
}

/*
 * C语言-文件系统
 */
int func_file()
{
    char file[30] = "./file.txt";
    //打开文件
    FILE *fp = fopen(file, "w+");
    if (fp == NULL)
    {
        return 0;
    }
    else
    {
        printf("%s文件已经打开\n", file);
    }

    //写入文件
    char data[20] = "Hello World";
    int data_len = strlen(data);
    int count = fwrite(data, data_len, 1, fp);
    printf("文件写入次数=%d\n", count);

    //重置文件指针
    fseek(fp, 0, SEEK_SET);

    //读取文件
    int res[20] = {'\0'};
    count = fread(res, data_len, 1, fp);

    //文件关闭
    fclose(fp);

    printf("文件读取次数=%d,数据=%s\n", count, res);
    return 0;
}

/*
 * C语言-二维数组的指针
 * 指针关系 a == &a == &a[0] == &a[0][0]
 * 1.行指针：a、&a[0]、int(*p)[N]
 * 2.普通指针：&a[M][N]、a[N]、int *
 */
int two_array_finger()
{
    int a[2][3] = {{1,2,3}, {4,5,6}};
    printf("a=%p\n", a);
    printf("&a=%p\n", &a);
    printf("&a[0]=%p\n", &a[0]);
    printf("&a[0][0]=%p\n", &a[0][0]);

    //创建二维数组指针(行指针)
    int (*p1)[3] = a;

    //创建一个一维数组的指针(普通指针)
    int *p2 = a[0];

    printf("p1=%p\n", p1);
    printf("p2=%p\n", p2);

    int maxLen = sizeof(a)/ sizeof(a[0]);
    for (int j = 0; j < maxLen; ++j)
    {
        int minLen = sizeof(a[j])/ sizeof(a[j][0]);
        for (int k = 0; k < minLen; ++k)
        {
            printf("p指针获取内容=%d\n", *(*(p1+j)+k));
        }
    }
    return 0;
}


/*
 * C语言-指针的指针
 */
int finger_finger()
{
    //生命指针
    int a1 = 1;
    int a2 = 2;
    int a3 = 3;
    int *a[3] = {&a1, &a2, &a3};

    int **p = a;
    int len = sizeof(a)/ sizeof(a[0]);
    for (int j = 0; j < len; ++j) {
        printf("a1=%d\n", *(p[j]));
        printf("a2=%d\n", *(*(p+j)));
    }
    return 0;
}


/*
 * C语言-指针参数
 */
//交换变量(即：变量的指针)
void swap_variable(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
//交换指针变量(即：变量指针的指针)
void swap_finger_variable(int **a, int **b)
{
    int *temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int param_finger()
{
    //变量交换
    int a = 20;
    int b = 10;

    //通过指针交换变量内存地址
    swap_variable(&a, &b);
    printf("a=%d, b=%d\n", a, b);

    //指针变量
    int *pA = &a;
    int *pB = &b;
    swap_finger_variable(&pA, &pB);

    printf("a=%d, b=%d\n", a, b);
    printf("a=%d, b=%d\n", *pA, *pB);
    return 0;
}