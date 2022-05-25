//
// Created by 王钱龙 on 2022/5/25.
//
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,x1,x2;
    printf("请输入二次项，一次项前的系数和常数，用逗号隔开:");
    scanf("%f，%f，%f",&a,&b,&c);
    if (b*b-4*a*c>0){
       x1=(-b+sqrtf(b*b-4*a*c))/(2*a);
       x2=(-b-sqrtf(b*b-4*a*c))/(2*a);
       printf("两个解分别是：%f\n%f",x1,x2);
    }else{
        printf("无解！");
    }
    return 0;
};