//
// Created by ouyang on 2024/9/4.
//
#include <stdio.h>
void fun1(){
    int i=10;
    //代码块
    {
        int j=10;
        printf("%d",j); //这种就是局限在代码块中出了定义它的大括号就会失效
    }
    printf("%d",j); //出了作用域
}
int main(){
    return 0;
}
