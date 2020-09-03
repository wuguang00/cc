/**************************************************************************
 File Name:     file1.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Thu Aug 13 23:47:33 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
#include "define.h" // practice the clause.

int main()
{
    int a, b, c, d;
    char string[] = "CHINA";
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    PR(D1, a);
    PR(D2, a, b);
    PR(D3, a, b, c);
    PR(D4, a, b, c, d);
    PR(S, string);
    PR(NL);
    PR(NL);
    printf("%d%d%d%d" "\n", a, b, c, d); // the same effect like this.
    PR(NL);
    PR(NL);
}

