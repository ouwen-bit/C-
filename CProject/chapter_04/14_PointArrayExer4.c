//
// Created by ouyang on 2024/8/19.
//
#include "stdio.h"
int main() {
//    int a[3][2] = {{10, 20},
//                   {30, 40},
//                   {50, 60}};
//    int *p;
//    p = &a[0][0];
//    printf("%p\n", p);     //000000f2f49ff7b0
//    printf("%p\n", p + 1); //000000f2f49ff7b4
//    printf("%p\n", p + 2); //000000f2f49ff7b8
//    int *q;
//    q = a[0];
//    printf("%p\n", q);      //000000f2f49ff7b0
//    printf("%p\n", q + 1);  //000000f2f49ff7b4
//    printf("%p\n", q + 2);  //000000f2f49ff7b8
//    int *r;
//    r = *a;  //
//    printf("%p\n", r);      //000000f2f49ff7b0
//    printf("%p\n", r + 1);  //000000f2f49ff7b4
//    printf("%p\n", r + 2);  //000000f2f49ff7b8

    int b[4][3] = {{10, 20, 30},
                   {40, 50, 60},
                   {70, 80, 90},
                   {100, 110, 120}};
    int *p = b[0];
    printf("b[3][2]对应的地址/指针为：%p\n",p+3*3+2);
    printf("b[3][2]对应的值为：%d\n",*(p+3*3+2));
    printf("b[3][2]对应的值为：%d\n",p[1*4]);
    return 0;
}