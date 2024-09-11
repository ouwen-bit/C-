//
// Created by ouyang on 2024/8/11.
//
#include <string.h>
#include "stdio.h"
#define x 4
#define b 5
int main(){
//   int  arry[4]={1,3,4,5};
//   int *a =arry;
//   a[0]=100;
//   for(int i=0;i<4;i++){
//       printf("%d ",arry[i]);//错误方式，将arr保存的数组的首地址赋值给a的指针变量
//   }
//    printf("\n");

//   int arr1[x]={12,2,34,6};
//创建有一个与arr1相同长度的数组；
//   int arr2[x];
//    for(int i=0;i<x;i++){ //通过循环的方式将arr1数组内的所有元素一一复制
//        arr2[i]=arr1[i];
//  }
//    for(int i=0;i<4;i++){
//        printf("%d ",arr2[i]); //遍历arr2
//    }
int arr3[b]={2,3,4,5,6};
int arr4[b];
    memcpy(arr4,arr3,b*sizeof (int));//memcpy函数复制，更加高效适合大型数组和复杂数组
    for(int i=0;i<b;i++){
    printf("%d ",arr4[i]); //遍历arr2
   }
    return 0;
}