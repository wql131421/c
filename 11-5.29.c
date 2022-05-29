//
// Created by 王钱龙 on 2022/5/29.
//
# include "stdio.h"
int main(){
    char e;
    printf("请输入英文字母：");
    scanf("%c",&e);
    e=(e>='A'&&e<='Z')?(e+32):e;
    printf("小写字母为:%c",e);
    return 0;
}