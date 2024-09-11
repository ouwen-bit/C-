//
// Created by ouyang on 2024/9/2.
//
#include <stdio.h>

//练习1：计算1-n的和
//方法1：使用非递归函数
int getsum(int n) {
    int sum = 0;
    for (int i = 0; i <=n; i++) {
        sum += i;
    }
    return sum;
}
//方式2; 使用递归函数
int getsum1(int n){
    if(n==1){ //当n的值等于1的时候，结束函数
        return 1;
    } else{
        return getsum1(n-1)+n;
    }
}
//练习2：递归函数，计算n的阶乘
int  factorial(int n){
    if(n==0||n==1){
        return 1;
    } else{
        return factorial(n-1)*n;
    }

}
//练习3：：计算斐波那契数列
//方法1：使用递归函数
int Fibonacci(int n){
    if(n==1||n==2) {
        return 1;
    } else{
        return Fibonacci(n-1)+ Fibonacci(n-2);
    }
}
//方法2：使用循环函数
int Fibonacci2(int n){
    if(n==1||n==2) {
        return 1;
    }
        int a=1,b=1,temp;
        for(int i=3;i<=n;i++){
            temp=a+b;
            a=b;
            b=temp;
        }

    return b;
}
int main() {
    int n = 5;
    //练习1
    int result = getsum(n);
    printf("%d\n", result);

    int result1 = getsum1(n);
    printf("%d\n", result1);
    //练习2
    int result3 = factorial(n);
    printf("%d\n", result3);
    //练习3
    n=5;
    //方法1：使用递归函数
    int result4 = Fibonacci(n);
    printf("%d\n", result4); //n=5 即数列第五个数
    //方法2：使用循环函数
    int result5 = Fibonacci2(n);
    printf("%d\n", result5);

    return 0;
}