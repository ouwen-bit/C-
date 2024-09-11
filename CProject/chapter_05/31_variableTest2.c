//
// Created by ouyang on 2024/9/4.
//变量存储方式分类
#include <stdio.h>
void nonStaticFun() {
    int n = 10; //动态存储方式
    printf("n=%d\n", n);
    n++;
    printf("n++=%d\n", n);
}
void staticFun() {
    static int n = 10; //静态存储方式，此时仅会初始赋值一次，然后保存的是上次调用时保存的值
    printf("static n=%d\n", n);
    n++;
    printf("n++=%d\n", n);
}
int main(void) {
    nonStaticFun();
    staticFun();
    printf("\n");

    nonStaticFun();
    staticFun();
    printf("\n");
    return 0;
}
