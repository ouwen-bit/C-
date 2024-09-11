//
// Created by ouyang on 2024/8/12.
//
#include <string.h>
#include "stdio.h"
int main (){
    char arr[] = {'a','b','c','d'};
    //在字符串结尾，C 语言会自动添加一个 '\0' 的义字符作为字符串结束的标志，所以字符数组也必须以 '\0'字符结束。
   char str1[6]={'h','e','l','l','o','\n'};//方法1
    char str2[12] = {"hello world"};  //注意使用双引号，非单引号
//    char str2[12] = {"hello world"}; //也可以省去大括号和声明数组大小的数字 在字符串数组中空格和\0都会占一个空间所以一共12个；
   // printf("数组的长度为%d",sizeof(str2)/sizeof(char));
    char nation[10] = "China";
    printf("数组的长度为%d",sizeof(nation)/sizeof(char));//数组的大小为10,因为自动的将其余的空间都加上了\0
    printf(" %d\n", strlen(nation));//字符串的长度为5,strlen会扫描nariond的大小直到\0结束，并不会计算\0
    //"x"和'x'的不同,前者是一个字符串占两个字节，后者是一个字符，字符可以加减运算，字符串常量则不能。
    return 0;

}
