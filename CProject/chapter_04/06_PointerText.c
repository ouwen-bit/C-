//
// Created by ouyang on 2024/8/14.
//二级指针
#include "stdio.h"
int main(){
//    int *p1,*p2;
//    int i=10;
//    p1=&i;
//    p2=p1; //并未达到理想的效果，未记录p1的地址
//    printf("%p\n",p1); //00000037b63ffccc
//    printf("%p",p2);  //00000037b63ffccc

    //正确的二级指针声明方式
    int *p;
    int **pp;
    int i=10;
    p=&i;
    pp=&p;
    **pp=20;
    printf("%p\n",p);
    printf("%p\n",&i);
    printf("%d",**pp);
    return 0;
}