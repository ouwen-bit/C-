//
// Created by ouyang on 2024/8/1
#include "stdio.h"
int main(){
//    int num=10;
//    printf("num=%d\n",num);
//    printf("num=%p\n",&num); //%p地址占位符号
//    int *p;
//    p=&num;
//    printf("p=%p\n",p);

//     int i=10;
//     int *p1,*p2;
//     p1=&i;
//     p2=&i;
//    printf("i=%p\n",&i);
//    printf("p=%p\n",p1);
//    printf("p=%p\n",p2);

    int num = 10, *ptr;
    ptr = &num;
    printf("%d\n",num);
    printf("请输入一个整数将赋值给地址\n");
    scanf("%d", ptr); //等价于scanf("%d", &num);

    printf("%d\n",num);

    return 0;
}