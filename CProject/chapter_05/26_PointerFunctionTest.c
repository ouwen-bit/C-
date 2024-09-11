//
// Created by ouyang on 2024/9/2.
//
#include <stdio.h>
#include <malloc.h>

//情景1
int fun1(){
    int m=10;
   return m;
}
// 情景2 下方的指针函数是不对的
int *fun2(){
    int m=10;
    return &m; //警告因为m在函数中是局部变量一旦调用结束，内存地址（栈空间）就被回收，即是反回地址了也是错误的
}
//情景3 对情景2进行修改
int *fun3(){
    static int m=10;//使用static修饰变量m，之后m是一个静态的变量（存在静态数据区），函数调用结束，不会被回收，会随着程序的结束而回收
    return &m;
}
//情景4 对情景2进行修改
int *fun4(){
    //使用malloc（）函数分配的内存空间是存储在（堆空间）中的
    int *m=(int *)malloc(sizeof (int));
    if(m!=NULL)
    {
        *m=10;//只要分配堆空间成功，就是m赋值
    }
    return m;
}
int main(){
    int n=fun1();
//    printf("%d\n",n);
//    int *n1=fun2();
//    printf("%d\n",*n1);

    int *n3=fun3();
    printf("%d\n",*n3);
    int *m=fun4();
    printf("%d\n",*m);
    return 0;
}