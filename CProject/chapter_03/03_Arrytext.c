//
// Created by ouyang on 2024/8/14.
//动态分配数组
#include <malloc.h>
#include "stdio.h"
int main(){
    int  length=10;
   int *arr =(int*)malloc(length*sizeof (int)); //使用malloc函数动态分配数组大小
   arr[1]=11;

    return 0;
}