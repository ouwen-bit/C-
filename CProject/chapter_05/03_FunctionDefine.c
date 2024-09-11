//
// Created by ouyang on 2024/8/22.
//
#include "stdio.h"

void print() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            printf("*");
        }
        printf("\n");
    }
}
//打印m行n列的*型矩形
    void printGraph(int m, int n) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
//打印m行n列的*型矩形，并返回矩形的面积
int printGraph1(int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return m*n;
}
    int main() {
//   print();
        printGraph(5, 10);
    }
