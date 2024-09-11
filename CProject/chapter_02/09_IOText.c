//
// Created by ouyang on 2024/8/27.
//
//#include "stdio.h"
//int main(){
////    char c='A';
////    putchar(c);//输出单字符
////
////    char c1=getchar(); //获取单字符
////    putchar(c1);
//
//
//
//    char str[]={"china"};
//    puts(str); //输出字符串，输出完后会自动换行
//
//    char str2[15];
//    gets(str2);//从键盘获取字符串，并保存在数组中
//    return 0;
//}
#include <stdio.h>
int global = 2023;//全局变量
int main(){
    int local = 2022;//局部变量
    //下面定义的global会不会报错？
    int global = 2024;//局部变量
    printf("global = %d\n", global);
    //当局部变量和全局变量同名时，优先使用局部变量，就近原则
    return 0;
}
