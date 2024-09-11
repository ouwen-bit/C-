//
// Created by ouyang on 2024/8/19.
//数组指针和指针数组
#include "stdio.h"
int main(){
    int *x[10];
    int a, b, c, d, e;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    e = 5;
 int *arr[10] = {&a, &b, &c, &d, &e};//定义一个int类型的

    for(int i = 0;i < 5;i++){
        printf("%d ",*arr[i]);
    }
    printf("\n");
    int line1[] = {1, 2, 3, 4};         //声明数组，矩阵的
   // 第一行
    int line2[] = {5, 6, 7, 8};         //声明数组，矩阵的
  //  第二行
    int line3[] = {9, 10, 11, 12};         //声明数组，矩
   // 阵的第三行
int *ptr_arr[3];
ptr_arr[0]=line1;//将line1[0]的地址赋值给指针变量ptr_arr[0]
    ptr_arr[1]=line2;//将line2[0]的地址赋值给指针变量ptr_arr[1]
    ptr_arr[2]=line3;//将line3[0]的地址赋值给指针变量ptr_arr[2]
    for (int i = 0; i < 3; ++i) { //外层循环用来遍历指针数组
        for (int j = 0; j < 4; ++j) {//内层循环用来遍历line1-3数组中的各个元素
           // printf("%d ",*(ptr_arr[i]+j));
            printf("%d ",ptr_arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
