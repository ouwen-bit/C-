//
// Created by ouyang on 2024/8/18.
//
#include "stdio.h"
int main(){
    int a[5]={1,2,3,4,5};
    int *p;
    p=a;
    printf("%d\n",*(p+2));
    p=a+1;
    printf("%d\n",*(p+2));
    printf("%d\n",p[2]);//使用带角标的指针，少用这种方式
    //&数组名
    printf("%p\n",a);//000000b54efffbc0 a表示的是a[0]元素的地址
    printf("%p\n",&a);//000000b54efffbc0 &a表示的是a数组的地址
    printf("%p\n",a+1);//000000b54efffbc4 a+1表示的是a[1]元素的地址
    printf("%p\n",&a+1);//000000b54efffbd4 &a+1表示的是数组的五个元素（20个字节）下一个地址
    return 0;
}