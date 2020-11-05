/**************************************************************************
 File Name:     relation_logic.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Fri Nov  6 00:12:15 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

#define lim 100

int main()
{
    if (1 > 0)
        printf("1 > 0\n");

    if (2 >= 2)
        printf("2 >= 2\n");

    if (2 <= 3)
        printf("2 <= 3\n");

    if (2 < 3)
        printf("2 < 3\n");

    if (3 == 3)
        printf("3 == 3\n");

    if (4 != 3)
        printf("4 != 3\n");

    char s[lim];
    char c;

    for (int i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;
    printf("%s\n",s);

    int valid = 0;
    if (!valid)
        printf("Invalid\n");

    if (valid == 0)
        printf("Invalid again.\n");

    return 0;
}
