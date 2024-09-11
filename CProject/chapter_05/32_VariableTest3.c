//
// Created by ouyang on 2024/9/4.
//
#include <stdio.h>
int f(int); //函数原型
int main() {
    int a = 2, i; //(自动)局部变量
    for (i = 0; i < 3; i++)
        printf("%d\n", f(a)); //输出f(a)的值
    return 0;
}
int f(int a) {
    auto int b = 0; //(自动)动态局部变量,b每次都会执行b=0的赋值操作
    static int c = 3; //静态局部变量，c只会初始化赋值一次，再次调用使用的是上一次调用保存的值
    printf("c = %d\n",c);
    b++;
    c++;
    return (a + b + c);
}