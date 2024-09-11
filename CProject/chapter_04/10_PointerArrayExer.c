//
// Created by ouyang on 2024/8/17.
//一维数组中指针的使用练习
#include "stdio.h"
#define N 5
int main(){
    //练习数组的赋值和遍历

    int arr[N];

    //方式一
//    printf("请输入%d个值\n",N);
//    for (int i = 0; i <N ; i++) {
//        scanf("%d",&arr[i]);
//    }
    //方式二
//      printf("请输入%d个值\n",N);
//    for (int i = 0; i <N ; i++) {
//        scanf("%d",&arr+i);
//    }
    //方式三
    int *p=&arr;
      printf("请输入%d个值\n",N);
    for (int i = 0; i <N ; i++) {
        scanf("%d",p+i);
    }
    //方式一
//    for (int i = 0; i < N; ++i) {
//        printf("%d ",arr[i]);
//    }
    //方式二
//    for (int i = 0; i < N; ++i) {
//        printf("%d ",*(arr+i));
//    }
//    方式三
//    for (int i = 0; i < N; ++i) {
//        printf("%d ",*(p+i)) ;
//    }
    //方法四，针对方式三变形
//    for (int i = 0; i < N; ++i) {
//        printf("%d ",*(p++));
//    }
    //或者
    for (p=arr; p<arr+N ; p++) {
        printf("%d ",*p);
    }
    return 0;
}
