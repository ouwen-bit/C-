//
// Created by ouyang on 2024/9/5.
//
#include <stdio.h>
//格式2：
struct cat{
    char *name;
    int age;
    char  gender;
};
//格式4：
struct student{
    char *name;
    int age;
}stu1={.name="tom",.age=13},
stu2={.name="rose",.age=13};

//格式5:
struct {//可以不指定类型名直接可以把Teacher删掉，这种称为匿名结构体
//structTeacher {
    char *name;
    int age;
}tea1,tea2;

//格式6：typedef命令
 //typedef struct Employee{
   typedef struct {//类型名也可以删除，也是一种匿名
    char *name;
    int age;
}emp;
int main(){
    //struct cat cat1={"小黄",2,'M'};对别
    emp emp1={"小黄",2};;//使用typedef特性,不在需要使用struct 和类型名来声明，直接使用别名emp
    emp emp2;//typedef的特殊性
    printf("name=%s,age=%d",emp1,emp2);//在没有给结构体变量赋值的情况下，调用数据时错误的
    //格式5：
    tea1.name="小张";
    tea1.age=20;

    stu1.name="joker";
    stu1.age=18;
    //格式2
    struct cat cat1={"小黄",2,'M'};
    printf("name=%s,age=%d,gender=%c\n",cat1.name,cat1.age,cat1.gender);
    //格式3：可以直接指定为某一位结构体变量赋值不用按照顺序
    struct cat cat2={.gender='M',.age=3,.name="小红"};
    printf("name=%s,age=%d,gender=%c\n",cat2.name,cat2.age,cat2.gender);
    return 0;
}
