//
// Created by ouyang on 2024/8/28.
//
#include <stdio.h>
int  main(){
    //情况1：针对于基本数据类型的变量，将变量的值传递过去
    int a=10;
    int b=10;
    printf("a=%d\n",a);
    b=20;
    printf("a=%d\n",a);
    //情况2：针对于数组，将数组的地址传递过去
    int arr[5]={1,2,3,4,5};
    int *arr2;
    arr2=arr;
    //遍历数组
    for (int i = 0; i < 5; ++i) {
        printf("%d ",arr2[i]);
    }
    printf("\n");
    arr2[0]=10;
    //变量数组
    for (int i = 0; i < 5; ++i) {
        printf("%d ",arr2[i]);
    }
    printf("\n");


    //情况3：//情况3：针对于指针，将指针保存的地址传递过去
    int i=10;
    int *p=&i;
    printf("%d \n",*p);//20
    *p=20;
    printf("%d ",*p);//20
    return 0;
}