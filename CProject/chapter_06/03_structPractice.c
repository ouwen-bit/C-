//
// Created by ouyang on 2024/9/5.
//
#include <stdio.h>
struct Box{
    double length;//长
    double width;//宽
    double height;//高
};
double getVolume(struct Box box){ //获取并计算立方体的函数
    return box.length * box.width * box.height;
}
int main(){
    struct Box box;//创建结构体实例
    printf("输入长度：");
    scanf("%lf",&box.length);
    printf("输入宽度：");
    scanf("%lf",&box.width);
    printf("输入高度：");
    scanf("%lf",&box.height);
    printf("体积为：%.2lf", getVolume(box));//调用函数获取体积并打印

    return 0;

}