//
// Created by ouyang on 2024/8/29.
//函数传递地址
//#include <stdio.h>
//void increment(int *a) {
//    (*a)++;
//    printf("a = %d\n", *a); // a = 11
//}
//int main() {
//    int i = 10;
//    printf("i = %d\n", i); // i = 10 //修改前
//    increment(&i);//将变量i的地址传递给函数increment
//    printf("i = %d\n", i); // i = 11 //修改后
//    return 0;
//}
#include <stdio.h>
int exchange (int *x,int *y)//交换值函数，定义了指针x和y来接受实参的地址
{
    int t;
    t =*x;//将x指针的值取出来放到变量t中
    *x=*y;
    *y=t;
}
int main(){
    int x=6,y=8;
    printf("x=%d,y=%d\n",x,y);//x=6,y=8
    exchange(&x,&y);//将x和y的地址传给函数exchange中，进行交换
    printf("x=%d,y=%d",x,y);//x=8,y=6

    return 0;
}
