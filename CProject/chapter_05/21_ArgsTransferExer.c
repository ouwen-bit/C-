//
// Created by ouyang on 2024/8/29.
//举例1：定义函数，求一维数组元素的最大值
//原型：int pMax(int *p,int n)
//功能：在长度为 n、由 p 指向的一维数组中求元素最大值
//#include <stdio.h>
//#define N 4
//int pMax(int *p,int n);
//int main(){
//    int arr[N];
//    printf("请输入四个值比较大小\n");
//    for (int i = 0; i <N ; ++i) {
//        scanf("%d",&arr[i]);
//    }
//    printf("max=%d", pMax(arr,N));
//    return 0;
//}
//int pMax(int *p,int n){
//    int max=*p;//将数组首元素的值传递给max
//    for (int i = 0; i < n; ++i) {
//        if(max<p[i]){
//            max=p[i];
//        }
//    }
//    return max;
//
//}
//
//举例2：多维数组名作为形参
// 有一个3×4的矩阵，求所有元素中的最大值

//#include <stdio.h>
//#define N 3
//int arrmax(int arr[][4],int n){
//    int max=arr[0][0];
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            if(max<arr[i][j]){
//                max=arr[i][j];
//            }
//
//        }
//    }
//    return max;
//}
//int main(){
//    int arr[][4]={{3,4,56,77,},
//                  {99, 666,66666,4},
//                  {9922,3332,222,33}};
//    printf("max=%d",arrmax(arr,N));
//    return 0;
//
//}


//变长数组
#include <stdio.h>
//int sum_array(int a[n],int n) { //报错 这里的形参n还没在定义就使用了所以报错必须先定义n
//    // ...
//}
int sumArray(int n, int a[n]) {
    // ...
}
int main() {
    int a[] = {1, 3, 5, 7};
    int sum = sumArray(4, a);  //由实参传递的值决定数组a[n]的长度
    return 0;
}