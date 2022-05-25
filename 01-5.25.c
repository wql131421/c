#include <stdio.h>

int main()
{
    char you;
    printf("请输入大写英文字母:");
    scanf("%c",&you);
    you=you+32;
    printf("小写英文字母为：%c",you);
    return 0;
}