//
// Created by ouyang on 2024/8/22.
//
/*
 * 1.main()函数中可以调用其他函数，非main（）函数是不是调用main()函数的
 * 2.非main（）函数可以互相调用
 * 3.将实参传给函数的形参，要求实参的类型与形参的类型一样，即可以自动转化就可以
 */
#include "stdio.h"

void hello1(){
    printf("hello1!\n");
    //main()
}
void hello2(){
    printf("hello2!\n");
    hello1();
}
void hello3(int num){
    printf("hello3!\n");

}
int main(){
    hello1();
    hello2();
    hello3(2);
    short s=5 ;
    hello3(s);
   // hello3(s,s);因为形参就一个参数，传递两个就会报错
    return 0;
}