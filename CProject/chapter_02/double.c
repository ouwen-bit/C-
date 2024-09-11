//
// Created by ouyang on 2024/8/26.
//
#include "stdio.h"

int main(){
double i=10.233; //double类型比float类型要更加宽
float  j=(float )i; //将宽类型转给低类型会警告，在转换的值前面加上要强转的类型，系统就不会出现警告

    return 0;
}