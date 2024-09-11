//
// Created by ouyang on 2024/8/25.
//
#include <stdio.h>
int main(){
    double Fahrenheit=64.0F,Celsius;//Fahrenheit表示的是华氏温度，Celsius表示的是摄氏温度
    Celsius=(5.0/9)*(Fahrenheit-32);//使用换算公式进行转化注意此处写成整数5/9，得到的结果是0，因为是整型，不会保留小数
    printf("华氏温度%.2lf对应的摄氏温度是%.2lf",Fahrenheit,Celsius);//输出结果
    return 0;
}