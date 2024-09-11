//
// Created by ouyang on
#include "stdio.h"
#define ROWS 10
#define COLS 10
int main(){
    int yangHui[ROWS][COLS];
    for (int i = 0; i < ROWS; i++) {

            yangHui[i][0]=1;
            yangHui[i][i]=1;
        for (int j = 1; j < i; ++j) {
            yangHui[i][j]=yangHui[i-1][j-1] + yangHui[i-1][j];

        }


    }
    //遍历yangHui数组
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j <=i; j++) {
            printf(" %d\t",yangHui[i][j]);
        }
        printf("\n");
    }
    return 0;
}