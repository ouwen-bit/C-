//
// Created by ouyang on 2024/8/23.
//
#include "stdio.h"
int main(int argc,char *argv[]){
    printf("argc=%d\n",argc);
    for (int i = 0; i < argc; ++i) {
        printf("%s\n",argv[i]);
    }
    return 0;
}