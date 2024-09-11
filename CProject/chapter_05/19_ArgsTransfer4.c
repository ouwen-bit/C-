//
// Created by ouyang on 2024/8/29.
//定义一个数组，通过函数给数组元素赋值
#include <stdio.h>
#define MAXLEN 10
void setvalue(int arr[],int len){//len为数组元素的个数或者是要修改多少个元素
    for (int i = 0; i <MAXLEN ; ++i) {
        arr[i]=i*10;
    }
}
int main(){
    int arr[MAXLEN]={0};
    for (int i = 0; i < MAXLEN; ++i) { //遍历调用前数组元素
        printf("%d ",arr[i]);//0 0 0 0 0 0 0 0 0 0
    }
    printf("\n");

    setvalue(arr,MAXLEN);
    for (int i = 0; i < MAXLEN; ++i) {//遍历调用后数组元素
        printf("%d ",arr[i]);//0 10 20 30 40 50 60 70 80 90
    }
    printf("\n");
    return 0;
}
