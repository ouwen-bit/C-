//
// Created by ouyang on 2024/9/2.
//指针函数
#include <stdio.h>
#include <string.h>

char *maxlengstr(char *str,char *str1){
    printf("str的长度是%d，str1的长度是%d\n", strlen(str), strlen(str1));
    if(strlen(str)>strlen(str1)){
        return str;
    } else{
        return str1;
    }

}
int main(){
    char str[30],str1[30];
    printf("请输入第一个字符串\n");
    gets(str);
    printf("请输入第二个字符串\n");
    gets(str1);
    char *maxstr=maxlengstr(str,str1);;
    printf("较大的字符串是%s\n",maxstr);
    return 0;
}