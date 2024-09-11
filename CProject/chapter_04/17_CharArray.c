//
// Created by ouyang on 2024/8/20.
//
#include "stdio.h"
int main(){
    //1.如何表示一个字符串
    //使用字符数组

    //两种方式的对比
    //数组名是一个常量在定义好数组后，不可以重新给数组名重新赋值为一个新的数组
    // 但是可以通过角标的方式获取指定索引位置上的值
//    char str1[14];
//    str1[0]='i';//正确
//    str1="hello tom";//错误，此处是将字符串赋值给常量
//
//
//    char * pStr = "hel";//指针变量是一个变量可以多次重新赋值
//    pStr = "hello tom"; //正确

    //1.举例：字符串的不可以变性
    //针对于整型数组，整型指针变量
//    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int *p = arr;
//    printf("%d\n", p[1]); //2
//    printf("%d\n", *(p+1));//2
//    p[1] = 50;
//    printf("%d\n", p[1]); //50
//    printf("%d\n", arr[1]);  //50
//    //
//    int num = 30;
//    p = &num;
//    printf("%d\n",*p);    //30
//    printf("%d\n",p[0]);  //30
   //举例二
   //测试1
//    char arr[] = "hello";
//    arr[1] = "m";   //运行时错误此处错误是因为用的双引号修改字符串数组
//    printf("%s\n",arr);
    //测试2
    char *pStr = "hello";
    pStr = "hello tom"; //正确
   // pStr[1] = "h";      //运行时错误,因为指针没有角标,
    printf("%s\n",pStr);
    return 0;
}