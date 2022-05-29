//
// Created by 王钱龙 on 2022/5/25.
//
#include<stdio.h>
int main(){
    char dengji;
    printf("请输入等级(大写):");
    scanf("%c",&dengji);
    switch (dengji) {
        case 'A':
            printf("该学生的分数为85-100\n");
            break;
        case 'B':
            printf("该学生的分数为70-84\n");
            break;
        case 'C':
            printf("该学生的分数为60-69\n");
            break;
        case 'D':
            printf("该学生的分数为<60\n");
            break;
        default:
            printf("该学生的等级输入错误!\n");
            break;
        
    }
    return 0;
}