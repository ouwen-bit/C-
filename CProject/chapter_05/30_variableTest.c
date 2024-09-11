//
// Created by ouyang on 2024/9/4.
//全局变量
#include <stdio.h>
int counter = 10; //全局变量
void add(){
    counter++;
    printf("counter = %d\n",counter);
}
int main() {
    add(); //counter =11
    add(); //counter =12
    printf("counter = %d\n",counter); //counter = 12
    int counter = 100;   //就近原则
    printf("counter = %d\n",counter); //counter = 100
    return 0;
}
