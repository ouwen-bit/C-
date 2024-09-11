//
// Created by ouyang on 2024/8/21.
//
#include "stdio.h"
int main(){
    //例子1：
    int a[3][2] = {{10, 20},
                   {30, 40},
                  {50, 60}};
    int *p=a;//将a[0]地址赋值给指针p

    /*上面这种赋值方式不合适
     * 因为p是指向int类型的变量或者常量
     * a,代表a[0]的地址，a[0]的类型不是int类型而是int[2]
     * 因为类型不同，不建议这样赋值“*p=a”
     * 应该(*p)[2]=a
     * */
    int (*q)[2]=a;//指定固定长度长度数组
    printf("%p\n",a);//获取a[0]的地址
    printf("%p\n",q);//获取a[0]的地址

    printf("%p\n",a+1);//获取a[1]的地址
    printf("%p\n",q+1);//获取a[1]的地址
    return 0;
}