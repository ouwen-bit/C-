//
// Created by ouyang on 2024/8/28.
//
#include <stdio.h>
void func1();
void func2();
int main() {
    func1();  //报错
    func2();  //报错
    return 0;
}
void func1() {
    //...
}
void func2() {
    //...
}