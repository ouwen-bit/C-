//
// Created by ouyang on 2024/8/21.
//

//函数的定义
///*
// * 返回值类型 函数名(数据类型1 形参1,数据类型2 形参2,…,数据类型n
//形参n){
// 函数体;
//}
// *
// * */
//定义一个函数，计算两个整数的和

#include <stdio.h>

int sum(int a, int b){
        int c=a+b;
        return c;
    }
    //short c=10;
    //return short c//s是short类型，可以自动转换为int类型，从语法上来讲和返回值类型匹配
//定义一个函数，计算两个整数的较大值并且返回
   int max(int a,int b){
    int c;
    if(a>b){
        c=a;
    } else{
        c=b;
    }
    return c;
}
//定义一个函数，计算两个整数的较大值并且打印
void printmax(int a,int b){

    int c= (a>b)?a:b;
    printf("%d\n",c);
}