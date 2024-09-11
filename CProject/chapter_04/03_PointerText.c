//
// Created by ouyang on 2024/8/13.
//
#include "stdio.h"
int main(){
//    int i1=10;
//    int *p1=&i1; //在这里*号是指针类型的意思
//    printf("%d\n",i1);
//    *p1=20;  //这里的*是取值运算符，作用是通过P1指针修改i1的值；
//    printf("%d\n",i1);
//
//    char i='A';
//    char *p=&i;
//    printf("%c\n",i);
//    *p='B';  //这里的*是取值运算符，作用是通过P1指针修改i1的值；
//    printf("%c\n",i);

//    定义指针变量 p1、p2，默认各自指向整数a、b，a、b从键盘输入。
//    设计程序，使得 p1 指向其中的较大值，p2 指向其中的较小值 。


int a=0,b=0;
    printf("输入两个整数\n");


scanf("%d %d",&a,&b);
    int *p1=&a,*p2=&b;
    if(a<b) {
        p1=&b;
        p2=&a;
    }

    printf("最大值为=%d 最小值为%d",*p1,*p2);

    return 0;
}