#include <string.h>
#include <stdio.h>
//
// Created by ouyang on 2024/9/5.
//1.创建结构体
struct student{
    //内部声明成员
    int id;//学号
    char name[30]; //名字
    char gender;//性别
    int age; //年龄
    char address[50];//家庭住址
};
struct cat{
    char  name;//名字
    int   age ;//年龄
    char  color[30];//颜色

};

int main(){
    //2.声明结构体变量
    struct student stu1;
    struct cat  cat1;
    //调用结构体成员
   stu1.id=1111;
   //stu1.name="nike";//针对于数组，不能重新赋值
   strcpy(stu1.name,"nike");//将数组的元素赋值，而不是给数组重新赋值
   stu1.gender='M';
   stu1.age=18;
    strcpy(stu1.address,"翻斗花园1号");
    printf("id=%d,name=%s,gender=%c,age=%d,address=%s",stu1.id,stu1.name,stu1.gender,stu1.age,stu1.address);

    return 0;
}