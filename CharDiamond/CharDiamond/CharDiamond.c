#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    char str = 0;
    scanf("%c", &str);
    int i = 0;
    int j = 0;
    //打印上半部分
    for (i = 0; i < (5 / 2 + 1); ++i)
    {
        //打印空格
        for (j = 0; j < (5 / 2 - i); ++j)
        {
            printf(" ");
        }
        //打印#
        for (j = 0; j < (2 * i + 1); ++j)
        {
            printf("%c", str);
        }
        printf("\n");
    }
    //打印下半部分
    for (i = 0; i < (5 / 2); ++i)
    {
        //打印空格
        for (j = 0; j < i + 1; ++j)
        {
            printf(" ");
        }
        //打印#
        for (j = 0; j < 5 - 2 * (i + 1); ++j)
        {
            printf("%c", str);
        }
        printf("\n");
    }
    return 0;
}