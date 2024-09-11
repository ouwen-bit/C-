//
// Created by ouyang on 2024/8/12.
//
#include "stdio.h"
#define ROWS 3
#define COLS 4
int main() {
    int arr1[ROWS][COLS] = {{3,  5, 8},
                      {12, 9},
                      {7,  0, 6, 4}};
//    int sum=0;
//    for(int i=0;i<ROWS;i++){
//        for(int j=0;j<COLS;j++){
//            sum+=arr1[i][j];
//        }
//    }
//    printf("sum=%d",sum);
     int max=0;
     int maxrows =0;
     int maxcole =0;
    int a[ROWS][COLS] = {{1,   2,  3,  4},
                         {9,   111,  7,  6},
                         {-10, 10, -5, 2}};
        for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
         if(max<a[i][j]){
             max=a[i][j];
             maxrows=i;
             maxcole=j;
         }
        }
    }
    printf("max=[%d][%d]%d",maxrows,maxcole,max);
    return 0;

}