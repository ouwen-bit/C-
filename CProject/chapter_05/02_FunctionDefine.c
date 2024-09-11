//
// Created by ouyang on 2024/8/22.
//
#include "stdio.h"
//1.函数在声明有返回值类型的情况下，如果没有在函数内部使用return+返回值结构，则是错误的
int test(){
    printf("hello");
   // return 12;
}
//2.如果函数声明函时，没有指定返回类型，则默认是int类型
 int main (){
    int i = test();
    printf("%d\n", i);
    return 0;
}