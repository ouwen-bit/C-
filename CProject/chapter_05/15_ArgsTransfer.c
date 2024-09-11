//
// Created by ouyang on 2024/8/28.
//形参传递形式
#include <stdio.h>
void increment(int a) {
    a++;
    printf("a = %d\n",a); // a = 11
}
int main(){
    int i = 10;
    printf("i = %d\n", i); // i = 10
    increment(i);
    printf("i = %d\n", i); // i = 10
    return 0;
}
