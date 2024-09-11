//
// Created by ouyang on 2024/8/22.
//
/*
 *任一大于 2 的偶数都可写成两个素数之和。利用判断素数的函数prime()验证哥德巴赫猜想。
 * -->除了1和他本身之外，[2，和数本身1]没有其他的约数。
 *素数/质数，只能被1和他本身整除的数;2,3,5,7.....
 * */
#include "stdio.h"
//问题1,判断一个数是否为素数
//如果函数返回1，表示num是一个素数，如果返回0，则表示num不是一个素数
int prime(int num) {
    for (int i = 2; i <= num - 1; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

//问题2,任意一个偶数是否可以写成两个素数之和
int main() {

    int num;
    printf("请输入一个大于2的偶数\n");
    scanf("%d", &num);
    for (int i = 2; i <= num / 2; i++) {
        if (prime(i) && prime(num - i)) {
            printf("%d = %d + %d", num, i, num - i);
            break;
        }
    }

}