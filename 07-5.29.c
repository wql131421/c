//
// Created by 王钱龙 on 2022/5/29.
//
# include "stdio.h"
int main(){
    int x,y;
    printf("请输入一个整数:");
    scanf("%d",&x);
    if (x>0)
        y=1;
    else
        if (x==0)
            y=0;
        else
            y=-1;
    printf("x=%d,y=%d",x,y);
    return 0;
}