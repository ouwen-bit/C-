//
// Created by ouyang on 2024/8/27.
//
#include "stdio.h"
int main(){
    int n1=10;//十进制
    int n2=0b10;//二进制
    int n3=017;//八进制
    int n4=0x1a;//十六进制

    printf("%\n",n1);//10
    printf("%d\n",n2);//2
    printf("%d\n",n3);//15
    printf("%d\n",n4);//26

    int x = 100;
    printf("dec = %d\n", x); // 100
    printf("octal = %o\n", x); // 144
    printf("hex = %x\n", x); // 64
    printf("octal = %#o\n", x); // 0144
    printf("hex = %#x\n", x); // 0x64
    printf("hex = %#X\n", x); // 0X64

    return 0;
}