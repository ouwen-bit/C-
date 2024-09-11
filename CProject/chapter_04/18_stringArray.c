//
// Created by ouyang on 2024/8/20.
//
#include "stdio.h"
int main(){
    //方式一
    char fruit[][7]={"Apple","Orange","Grape","Pear","Peach"};
    char weekdays[7][10]={
        "Monday", //Monday\0\0\0\0
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "sunday"
    };
    //遍历
    for (int i = 0; i < 7; ++i) {
        printf("%s ",weekdays[i]);
    }
    printf("\n");
    //方式二  相较于方式一更加节省内存空间
    char *weekdays1[7]= //使用字符指针数组表示字符串数组,7也可以省去
            {
                    "Monday",
                    "Tuesday",
                    "Wednesday",
                    "Thursday",
                    "Friday",
                    "Saturday",
                    "sunday"
            };
    for (int i = 0; i < 7; ++i) {
        printf("%s ",weekdays1[i]);
    }
    char *color[5]={"red","yellow","blue","white","black"};
    return 0;
}