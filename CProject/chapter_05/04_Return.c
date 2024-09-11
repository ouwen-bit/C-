//
// Created by ouyang on 2024/8/22.
//
#include "stdio.h"

/*return的作用：
 * 1.结束函数的执行
 * 2.在有返回值类型的函数中return+返回值，还可以返回一个结果给函数
 *
 * */
void show(int age){
    if(age>=22){
        printf("到了法定结婚年龄\n");
    } else{
        printf("未到法定结婚年龄\n");
    }
}
void show1(int age){
    if(age>=22){
        printf("到了法定结婚年龄\n");
        return;//return关键字后面不能编写执行语句，不会被执行
    }
        printf("未到法定结婚年龄\n"); // 这条语句不会被执行
    }
int main(){
    int age=23;
    show(age);
    show1(age);
    return 0;
}