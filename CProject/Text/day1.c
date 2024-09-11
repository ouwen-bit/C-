//
// Created by ouyang on 2024/8/26.
//
#include "stdio.h"
int main(){
    int num[]={'h','e','l','l','o'};

    int size= sizeof (num)/sizeof (int);
    int left=0,right=size,t;
    for ( left= 0; left <right; left++) {

        t=num[right];
        num[right]=num[left];
        num[left]=t;
             right--;
    }
    for (int x = 0; x <= size; ++x) {
        printf("%c", num[x]);
    }
    return 0;
}