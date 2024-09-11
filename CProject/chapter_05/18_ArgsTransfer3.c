//
// Created by ouyang on 2024/8/29.
//
#include <stdio.h>
void test1(int a, int b, int c) { //值传递函数
    a += 1;
    b += 1;
    c += 1;
}
void test2(int arr[], int n) {  //地址传递函数
    for (int i = 0; i < n; i++) {
        arr[i] += 1;
    }
}
int main() {
    //测试test1() 使用值传递函数
    int arr1[3] = {1, 2, 3};
    printf("调用函数前数组各元素值为： ");
    printf("%d,%d,%d\n", arr1[0], arr1[1], arr1[2]);
//1,2,3
    test1(arr1[0], arr1[1], arr1[2]);
    printf("调用函数后数组各元素值为： ");
    printf("%d,%d,%d\n", arr1[0], arr1[1], arr1[2]);
//1,2,3
//测试test2() 使用地址传递
    int arr2[3] = {1, 2, 3};
    printf("调用函数前数组各元素值为：");
    printf("%d,%d,%d\n", arr2[0], arr2[1], arr2[2]);
//1,2,3
    test2(arr2, 3);
    printf("调用函数后数组各元素值为： ");
    printf("%d,%d,%d\n", arr2[0], arr2[1], arr2[2]);
//2,3,4
    return 0;
}