//
// Created by ouyang on 2024/8/12.
//
#include "stdio.h"
#define ROWS 2
#define COLS 3
int main(){
    int a[ROWS][COLS]={1,2,3,4,5,6};
    int b[COLS][ROWS];
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
            b[j][i]=a[i][j];
        }
    }
    for(int i=0;i<ROWS;i++){ //遍历a数组
        for(int j=0;j<COLS;j++){
            printf("%2d",a[i][j]);
        }
        printf("\n");
    }
    //遍历b数组
    for(int i=0;i<COLS;i++){ //遍历a数组
        for(int j=0;j<ROWS;j++){
            printf("%2d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}