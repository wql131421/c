//
// Created by 王钱龙 on 2022/5/27.
//
# include<stdio.h>
int main(){
    float a;int b,d,c;
    printf("三位数字:");
    scanf("%f",&a);
    b=(int)(a/100);
    c=(int)((a-b*100)/10);
    d=(int)(a-b*100-c*10);
    printf("个位%d\n十位%d\n百位%d",d,c,b);
    return 0;
}