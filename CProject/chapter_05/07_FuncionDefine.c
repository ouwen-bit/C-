//
// Created by ouyang on 2024/8/22.
//
/*定义函数max()，求两个double型变量的最大值，求三个
 *double型变量的最大值
*/
#include "stdio.h"
double dualMax(double d1,double d2){
    double d=(d1>d2)?d1:d2;;
    return d;
}
double rriMax(double d1,double d2,double d3){
    //方式一
//    double d=(d1>d2)?d1:d2;
//    return    (d>d3)?d:d3;
    //方式二
//   double d=dualMax(d1,d2);
//   return dualMax(d,d3);
   //或
    return dualMax(dualMax(d1,d2),d3);
}
int main(){
    double d1=121.3,d2=33.3,d3=55666.4;
    printf("%.2lf和%.2lf的较大值为%.2lf\n",d1,d2, dualMax(d1,d2));
    printf("%.2lf和%.2lf和%.2lf的较大值为%.2lf\n ",d1,d2,d3, rriMax(d1,d2,d3));
    return 0;
}