//
// Created by ouyang on 2024/8/11.
//
//这里的特征值涉及到：平均值、最大值、最小值、总和等
//        举例1：定义一个int型的一维数组，包含10个元素，然后求出数组中
//        的最大值，最小值，总和，平均值，并输出出来。
#include  <stdio.h>
int main()
{

    int arry[]={1,2,5,4,7};
    int sum=0,min=arry[0];
    double age=0;
    size_t arrlong =sizeof (arry)/sizeof (int );
    int max=arry[0];
    for(int i=1;i<arrlong;i++){
        if(max<arry[i]){
            max=arry[i];

        }
    }
    for(int i=1;i<arrlong;i++){
        if(min>arry[i]){
            min=arry[i];

        }
    }
    for(int i=1;i<arrlong;i++){
        if(arry[i]!=0){
         sum+=arry[i];

        }
    }
    for(int i=1;i<arrlong;i++){
        if(arry[i]!=0){
            age++;
        }
    }
    age=sum/age;
    printf("数组的最大数为=%d\n",max);
    printf("数组的最小数为=%d\n",min);
    printf("数组的总数为=%d\n",sum);
    printf("数组的平均数为=%.2lf\n",age);
    return 0;
}