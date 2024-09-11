//
// Created by ouyang on 2024/8/28.
//
#include <stdio.h>
char *getWeekName(int week);
char *getMonthName(int month);
int isLeapYear(int year);
int getTotalDaysOfMonth(int year, int month);
int getTotalDaysOfYear(int year);
        int main() {
    int week=1;
    char *week1 = getWeekName(week);
    printf("%d对应的是%s\n", week, week1);

    int month = 4;
    char *monthIofo = getMonthName(month);
    printf("%d对应的是%s\n", month, monthIofo);

    int year = 2024;
    int leyear = isLeapYear(year);
    printf("%d是闰年吗%d\n", year, isLeapYear(year));

    int month1 = 3;
    int totalDays = getTotalDaysOfMonth(year, month1);
    printf("%d年%d月总天数是:%d\n", year, month1, totalDays);

    int totalYearday = getTotalDaysOfYear(year);
    printf("%d年天数是:%d天\n", year, totalYearday);
    return 0;
}
char *getWeekName(int week) {
//    switch (week) {
//        case 1:
//            return "Monday";
//        case 2:
//            return "Tuesday";
//        case 3:
//            return "Wednesday";
//        case 4:
//            return "Thursday";
//        case 5:
//            return "Friday";
//        case 6:
//            return "Saturday";
//        case 7:
//            return "Sunday";
//    }
    char *weeks[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    if(week>=1&&week<=7){
        return week[weeks-1];
    } else{
        return "";
    }
}
// 函数：getMonthName
// 描述：根据输入的月份数，返回相应的月份名称
// 参数：month - 代表月份的整数（1表示一月，12表示十二月）
// 返回值：返回表示月份名称的字符串，如果输入无效则返回空字符串
char *getMonthName(int month) {
    char *months[] = {"January", "February", "March",
                      "April", "May", "June", "July",
                      "August", "September", "October",
                      "November", "December"};
    if(month>=1&&month<=12)
    {
        return  months[month-1];
    }
    return "";
}
// 函数：isLeapYear
// 描述：检查输入的年份是否为闰年
// 参数：year - 待检查的年份
// 返回值：如果是闰年则返回1，否则返回0，如果输入为负数则返回-1作为错误标志
//提示：能被4整除但不能被100整除，或者能被400整除的年份，即为闰年。
int isLeapYear(int year) {
    if(year>=0){
        if(year%4==0&&year%100!=0||year%400==0){
            return 1;
        }
        return 0;
    } else{
        return -1;
    }



}
// 函数：getTotalDaysOfMonth
// 描述：获取指定年份和月份的总天数
// 参数：year - 年份，month - 月份
// 返回值：返回该月份的总天数，如果输入无效则返回-1作为错误标志
int getTotalDaysOfMonth(int year, int month) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30,
                  31, 30, 31};
    if(isLeapYear(year)){   //判断是否为闰年
        days[1]++;  //2月是29天
    }
    if(month>=1&&month<=12){
        return days[month-1];
    }
    return -1;
}
// 函数：getTotalDaysOfYear
// 描述：获取指定年份的总天数
// 参数：year - 年份
// 返回值：返回该年份的总天数，如果输入无效则返回-1作为错误标志
int getTotalDaysOfYear(int year) {
    if(year>=0){
        if(isLeapYear(year)){
            return 366;
        }
        return 365;
    } else{
        return -1;
    }
}