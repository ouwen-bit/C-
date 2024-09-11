//
// Created by ouyang on 2024/8/14.
//
#include "stdio.h"
#define LENGTH 5
int main(){
//    int arr[5]={1,2,3,4,5};
//    int *p=&arr[1];
//    printf("%p\n",p);//0000009dcfbffbc4
//    printf("%d\n",*p);//2
//    printf("%p\n",p+1);//0000009dcfbffbc8
//    printf("%p\n",p-1);//0000009dcfbffbc0
//    printf("%d\n",*(p+1));//3
//    printf("%d\n",*(p-1));//1

    int arr1[LENGTH]={10,20,30,40,50};
    //方式一
//    for(int i=0;i<LENGTH;i++){
//        printf("%d ",arr1[i]);
//    }
//    printf("\n");
//    int *p=&arr1[0];
//    for(int i=0;i<LENGTH;i++){
//        printf("%d ",*(p+i));
//    }


        int arr[5] = {1, 2, 3, 4, 5};
        int *p1 = &arr[0];
        int *p2 = &arr[4];
        printf("p1的地址为：%d\n", p1); //497022544
        printf("p2的地址为：%d\n", p2); //497022556
        printf("p2-p1=%d\n", p2 - p1); //3 等同于 (497022556- 497022544)/4 ==> 3
        return 0;

}