//
// Created by ouyang on 2024/8/28.
//
#include <stdio.h>
#include <stdlib.h>


void show(){
    printf("2222\n");
    exit(EXIT_SUCCESS);//退出当前程序
        printf("3333\n");//该语句不会被执行
    }

void print(void) {
    printf("something wrong!\n");
}


    int main(){
        printf("1111\n");

     // show();
      printf("4444\n");
        atexit(print);//在程序结束之前，必须要做的相关操作，，比如资源的关闭，内存中临时数据的持续存储
        exit(EXIT_FAILURE);
    }