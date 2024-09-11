//
// Created by ouyang on 2024/8/14.
//使用malloc函数创建二位数组
#include <malloc.h>
#include "stdio.h"
int main(){

int row=2,cloc=2;
   int **arr=(int*) malloc(row*sizeof (int *));
   for(int i=0;i<row;i++)
   {
       arr[i]=(int*) malloc(cloc*sizeof (int ));
       for(int j=0;j<cloc;j++)
       {
         arr[i][j]=1;
           printf("%d ",arr[i][j]);
       }
       printf("\n");
   }
    free(arr);
    return 0;
}