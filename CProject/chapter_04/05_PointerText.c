//
// Created by ouyang on 2024/8/14.
//野指针
#include "stdio.h"
int main(){
//    int *p;
//    printf("%d\n",*p); //错误的
//    *p=10; //错误的

   int arr[11];
    int *p=arr;
   for(int i=1;i<=10;i++,p++){
         *p=i;
   }
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}