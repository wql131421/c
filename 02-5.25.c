//
// Created by 王钱龙 on 2022/5/25.
//
// 判断三角形和求三角形的面积
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,s,area;
    printf("请输入三角形第一条边:");
    scanf("%f",&a);
    printf("请输入三角形第二条边:");
    scanf("%f",&b);
    printf("请输入三角形第三条边:");
    scanf("%f",&c);
    if(a+b>c&a+c>b&c+b>a){
        s=(a+b+c)/2;
        area= sqrt(s*(s-a)*(s-b)*(s-c));
        printf("面积为:%f",area);}else{
        printf("无法构成三角形！");}

    return 0;
}