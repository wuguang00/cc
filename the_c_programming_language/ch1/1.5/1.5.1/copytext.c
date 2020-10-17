/**************************************************************************
 File Name:     copytext.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat Oct 17 08:45:33 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

int main()
{
    char c1;
    c1 = getchar();
    putchar(c1);

    int c;
    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }

    int c2;
    while ((c2 = getchar()) != EOF)
        putchar(c2);

    return 0;

}

