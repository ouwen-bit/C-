//
// Created by ouyang on 2024/9/2.
//可变参数
#include <stdio.h>
#include <stdarg.h>
double age(int count,...){
    va_list  args;//存储可变参数
    va_start(args,count);//初始化list变量
    double sum=0.0;//计算所有整数的和
    for (int i = 0; i <count ; ++i) {
        int num= va_arg(args,int );//依次取出可变参数
        sum +=num;
    }
    va_end(args);//结束可变参数
    return sum/count;

}

int main(){
    double avg= age(5,10,20,30,40,50);
    printf("%lf ", avg);
    return 0;
}