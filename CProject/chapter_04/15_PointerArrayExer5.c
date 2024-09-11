//
// Created by ouyang on 2024/8/19.
//二位数组中使用指针变量的操作
#include "stdio.h"
#define ROWS 3
#define COLS 4
int main(){
    //用指针访问二维数组，求二维数组元素的最大值。
    int a[ROWS][COLS] = {{10,  20,  30,  40},
                         {50,  60,  70,  80},
                         {120, 110, 100, 90}};
    //方式一
//    int max=a[0][0];
//    for(int i=0;i<ROWS;i++){
//        for (int j = 0; j < COLS; j++) {
//            if(max< a[i][j]){
//                max=a[i][j];
//            }
//        }
//    }
//方式二
//        int max=a[0][0];
//        int *p=a[0];
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; ++j) {
//            if(max<*(p+i*COLS+j)){
//
//                max=*(p+i*COLS+j);
//            }
//        }
//    }
//方式三
     int *p,max;
     for(p=a[0],max=*p;p<a[0]+ROWS*COLS;p++){
         if(max<*p){
             max=*p;
         }
     }

    printf("max=%d",max);
    return 0;
}