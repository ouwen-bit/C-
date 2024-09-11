//
// Created by ouyang on 2024/8/27.
//
#include "stdio.h"
int main(){
    unsigned char x = 255;//x 是 unsign char 类型，最大值是255（11111111）
    x = x + 1;//加上1后数据就溢出了（ 100000000）最高位被舍弃，只剩零
    printf("%d\n", x); // 0
}
