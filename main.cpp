#include <iostream>

#include "base_c/base.c"

/**
 * C语言基础
 * @return
 */
void base_c()
{
    hello_c();
    integer_size();   //整数类型
    floating_size();  //浮点类型
    set_variable();   //变量定义
    set_constant();   //常量定义
    hex_conv();   //进制转换
    arth_logic(); //操作符与云算符
    input_outing();   //输入输出
    select_structed(); //判断结构
    loop_structed();  //循环结构
    array_structed(); //1~2维数组
    func_structed();  //函数定义
    int sum = func_recursion(100); //函数递归
    printf("sum=%d", sum);
    func_variable(10);  //全局变量
    free_memory(10); //内存管理
    finger_structed(); //指针定义
    void_finger(); //空指针与野指针
    array_finger(); //数组指针
    string_finger(); //字符串指针
    func_finger(); //函数指针
    struct_type(); //结构体类型
    struct_finger(); //结构体指针
    struct_listed(); //结构体与链表
    enum_type(); //枚举类型
    union_type(); //共用体类型
    func_file(); //文件系统
    two_array_finger(); //二维数组
    finger_finger(); //指针的指针
    param_finger(); //指针参数
}

#include "base_c++/hello.cpp"
#include "base_c++/base_typeid.cpp"
#include "base_c++/base_datatype.cpp"

/**
 * C++语言基础
 * @return
 */
int base_ccc()
{
//    hello_ccc();
//    echo_typeid(); //获取类型
//    echo_wchar(); //宽字符串类型
    echo_bool(); //布尔类型

    return 0;
}

/**
 * 程序主函数
 * @return
 */
int main()
{
//    base_c();
    base_ccc();

    return 0;
}