//
// Created by ouyang on 2024/8/27.
//常量定义
#include "stdio.h"
#define ZERO 0
int main(){
    //1.字面常量
    100;//整型常量
    3.14;//实型常量
    'c';//字符常量

    //2.#define
    printf("ZERO=%d ",ZERO);//使用define定义之后就可以使用了
    //ZERO=1;不可以重新赋值

    //3.const限定关键字
    const int num=10; //const修饰的常量，修饰的对象被创建后就不能被改变，所以必须要初始化。
    num=20;//是不能直接进行修改的



    return 0;
}