//
// Created by ouyang on 2024/8/24.
//
#include "stdio.h"
int main(){

    char t;
    char a[]={'h','e','l','l','o'};
    int size=sizeof (a)/sizeof (a[0]);
    int left=0,right=size-1;
    while (left<right){
        t=a[left];
   a[left]=a[right];
     a [right]=t;
     left++;
     right--;


    }
    for(int i=0;i<size;i++){
        printf("%c",a[i]);
    }

    return 0;
}