//
// Created by huangyan on 18/7/24.
//

#pragma once //避免重复调用

#ifndef STUDY_C_BASE_HEAD_H //如果.h已声明就不创建
#define STUDY_C_BASE_HEAD_H

//只定义
extern int var_head;

void func_head_sum();

//内联函数
//1.（代码量小，没有for等控制语句）适用于内联函数，可以提高代码执行效率
inline void func_head_inline(int &a)
{
    a = a+10;
}

#endif //STUDY_C_BASE_HEAD_H
