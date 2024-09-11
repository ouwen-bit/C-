//
// Created by ouyang on 2024/8/12.
//
#include "stdio.h"
int main(){
    //方式一
    int  arr1[2][5]={0}; //二位元素，即数组包含了两个数组元素在 内存 中，各元素是连续存放的，不是二维的，是线性的。
//    printf("%d\n",sizeof (arr1));//占32个字节
//    printf("%d\n",sizeof (arr1)/sizeof (int)); //八个元素
   arr1[0][3]=10;
    arr1[1][3]=11;
    arr1[0][0]=12;
    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++)
        {
            printf("a[%d][%d]=%p\n",i,j,&arr1[i][j]);
        }

    }
    return 0;
}