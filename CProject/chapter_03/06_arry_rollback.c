//
// Created by ouyang on 2024/8/12.
//
#include "stdio.h"

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //arr[i]与arr[arr.length -i -i]
    size_t length = sizeof(arr) / sizeof(int);
//    for (int i = 0;i<length/2; i++) {  //反转方法一
//        int temp = arr[i];             //和前面数据互换的算法一样
//        arr[i] = arr[length - 1 - i];
//        arr[length - 1 - i] = temp;
//
//    }
//    for(int b=0;b<length;b++){  //遍历
//        printf("%d\t",arr[b]);
//    }
for(int left=0,right=length-1;left<right;left++,right--){//反转方法2
           int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
}
    for(int b=0;b<length;b++){  //遍历
        printf("%d\t",arr[b]);
    }

    return 0;
}