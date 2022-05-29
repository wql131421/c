//
// Created by 王钱龙 on 2022/5/29.
//
# include "stdio.h"
int main(){
    float a,b,c;
    printf("请输入两个数字!");
    scanf("%f%f",&a,&b);
    if (a<b)
    {
        c=b;
        b=a;
        a=c;}
    printf("a=%f,b=%f",a,b);
    return 0;
}