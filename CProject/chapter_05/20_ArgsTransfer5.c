//
// Created by ouyang on 2024/8/29.
//
//#include<stdio.h>
//#define N 100
//int digitalCount(char *p) {
//    int count = 0;
//    for (; *p != '\0'; p++)
//        if (*p >= '0' && *p <= '9')
//            count++;
//    return count;
//}
//int main() {
//    char strs[N] = "a12bc43hec22b68o";
//    printf("数字字符的个数为 % d个\n",
//           digitalCount(strs)); //8
//}



#include <stdio.h>
#include <string.h>
void stringSort(char *[], int);
void stringPrint(char *[], int);


int main() {
    char *days[7] = {"Sunday", "Monday",
                     "Tuesday", "Wednesday", "Thursday",
                     "Friday", "Saturday"};
    stringSort(days, 7);
    stringPrint(days, 7);
    return 0;
}
    void stringSort(char *string[], int n){
    //冒泡排序 从小到大排序
        char *temp;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++)
                if (strcmp(string[j], string[j + 1]) > 0) {
                    temp = string[j];
                    string[j] = string[j + 1];
                    string[j + 1] = temp;
                }
        }
    }
    void stringPrint(char *string[], int n) {//遍历指针数组元素
        for (int i = 0; i < n; i++) {
            printf("%s ", string[i]);
        }
    }