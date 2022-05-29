//
// Created by 王钱龙 on 2022/5/29.
//
# include "stdio.h"
int main(){
    char E;
    printf("请输入英文字母:");
    scanf("%c",&E);
    if(E>='A'&&E<='Z')
        printf("%c的小写字母为%c",E,E+32);
    else
        printf("输入的为小写字母");
    return 0;
}