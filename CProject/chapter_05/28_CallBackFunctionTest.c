//
// Created by ouyang on 2024/9/3.
//
//有两个整数a和b，由用户输入1,2或3。如输入1，程序就给出a和b中的大者，输入2，就给出a和b中的小者，输入3，则求a与b
//之和。
#include <stdio.h>
//回调函数
int fun(int a,int b,int (*p)(int,int))
{
    int result=(*p)(a,b);
    return result;
}
int max(int a,int b){
  int result=(a>b)?a:b;
    printf("最大值=");
    return result;
}
int min(int a,int b){
    int result=(a<b)?a:b;
    printf("最小值=");
    return result;
}
int sum(int a,int b){

    int result=a+b;
    printf("sum=");
    return result;
}
int main(){
    int a=10,b=20,m;
    printf("请输入1个整数（1/2/3）\n");
    scanf("%d",&m);
    int result;
    switch (m) {
        case 1:
            result= fun(a,b,&max);
            break;
        case 2:
            result= fun(a,b,&min);
            break;
        case 3:
            result=fun(a,b,&sum);
            break;
    }
    printf("%d",result);
    return 0;
}