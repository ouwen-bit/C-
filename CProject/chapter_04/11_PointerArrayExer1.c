//
// Created by ouyang on 2024/8/17.
//
#include "stdio.h"
#define N 5
int main (){
    int arr[N];
    //1.给数组赋值
    printf("请输入%d个数值\n",N);
    for(int i=0;i<N;i++){
        scanf("%d",arr+i);
    }
    //2.声明一个变量，用于保存数组中的最大值
    int max=*(arr);
    //3.通过循环的方式，获取最大值
    //方式一
//    for (int i = 0; i < N; i++) {
//        if(max<arr[i]){
//            max=arr[i];
//        }
//    }
    //方式二
//    for (int i = 0; i < *(arr+i); i++) {
//        if(max< *(arr+i)){
//            max= *(arr+i);
//        }
//    }
    //方式三
    int *p=arr;
        for (int i = 0; i < N; i++) {
        if(max<*(p+i)){
            max=*(p+i);
        }
    }
    printf("在输入的%d数中最大值为%d",N,max);

    return 0;
}