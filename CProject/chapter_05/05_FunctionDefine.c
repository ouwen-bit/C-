//
// Created by ouyang on 2024/8/22.
//
#include "stdio.h"
//情况一：函数不能嵌套定义
void func1(){
//    void func2(){
//错误的
//    }
};
//情况二：在c语言中，不支持函数重载
//像C++、Java等语言都支持。它允许在同一个作用域内(比如同一个"类"中)定义多个 函数名相同
//但 参数列表不同 (即参数个数不同或参数类型不同)的函数。此时的多个函数彼此构成重载。
//同一个程序中函数不能重名， 函数名用来唯一标识一个函数
int add(int i,int j){
    return i+j;
}
//int add(int i,int j,int k){
//    return i+j+k;
//}
//解决方法1
int add1(int i,int j,int k){
    return i+j+k;
}
//解决方法2
int addsum(int i,int j,int k){
    return i+j+k;
}

int main(){
    func1();
    add1(1,2,3);

    return 0;
}