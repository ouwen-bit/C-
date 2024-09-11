//
// Created by ouyang on 2024/8/28.
//
#include <stdio.h>
int exchange (int x,int y)//交换值函数
{
    int t;
    t =x;
    x=y;
    y=t;
}
int main(){
    int x=6,y=8;
    printf("x=%d,y=%d\n",x,y);//x=6,y=8
    exchange(x,y);//错误的，想用这种方式交换值
    printf("x=%d,y=%d",x,y);//x=6,y=8,并未完成交换l

    return 0;
}