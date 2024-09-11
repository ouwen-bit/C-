//
// Created by ouyang on 2024/9/5.
//
//情况1  常量
void func1(){
    const int num =10;
  //  num ++;//已经是常量，不可修改值
}
//情况2  指向常量的指针
void func2(){
    int num=10;
    const int *ptr =&num; //指向常量的指针
         //   *ptr=20; //报错 因为不能通过指针的方式区修改常量
         int num1=20;
         ptr =&num1;
}
//情况3 常量指针
void func3(){
    int num=10;
    int *const ptr=&num; //指针常量的写法与指向常量的指针const int *ptr =&num;
    int num1=20;
    //ptr =&num1;//报错 因为指针是常量了，不可以修改了，不能指向其他地址
}
//情况4 同时声明常量和常量指针
void func4(){
    int num=10;
   const int *const ptr=&num; //同时声明常量和常量指针
    //*ptr=20; //报错
    int num1=20;
    //ptr =&num1;报错
}
//情况5 常量参数
void func5(const int num){
    //num =10; //参数值已经是常量了，不可以在函数内部修改
}
//情况6 常量数组
void func6()
{
    const int arr[]={1,2,3,4};
    //arr[0]=10;//数组已经被cons修饰，数组内元素不可以再被修改
}
//情况7 常量结构体
struct Point {
    const int x;
    const int y;
};