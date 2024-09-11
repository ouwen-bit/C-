//
// Created by ouyang on 2024/8/24.
//
//#include "stdio.h"
//int main()
//{
//    int i =10;//变量类型+变量名+变量值
//    printf("%7.2f",23.3000);//"  23.30"
//    return 0;
//}
#include <stdio.h>
void printStar();
int main() {
    int i;            //变量i只能在main中使用，与函数printstar中i变量互不干扰
    for (i = 1; i <= 5; i++) {
        printStar();
        putchar('\n');
    }
    return 0;
}
void printStar() {
    int i;
    for (i = 1; i <= 10; i++)
        putchar('*');
}
