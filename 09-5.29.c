//
// Created by 王钱龙 on 2022/5/29.
//
# include "stdio.h"
int main(){
    int year;
    printf("请输入需要判断的年份:");
    scanf("%d",&year);
    if((year%4==0&&year%100!=0)||(year%400==0))
        printf("%d年是闰年",year);
    else
        printf("%d年不是闰年",year);
    return 0;
}