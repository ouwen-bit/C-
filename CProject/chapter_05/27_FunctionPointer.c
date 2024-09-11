//
// Created by ouyang on 2024/9/3.
//函数指针
#include <stdio.h>
void  print(int m){
    printf("%d\n",m);
}
int max(int m,int n){
    return  (m>n)?m:n;
}
int main(){
//    举例1：
  //定义函数指针
  void(*print_Pointer)(int);
  print_Pointer=&print;//赋值
  //函数的调用
  //方式1：以前调研方式使用函数名
    print(10);
  //方式2；使用指针函数调用
    (*print_Pointer)(10);
//    举例2：
int (*max_Pointer)(int,int);
max_Pointer=&max;
   int max= (*max_Pointer)(10,20);
    printf("%d",max);
    return 0;
}
