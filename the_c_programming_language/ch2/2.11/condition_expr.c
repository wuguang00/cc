/**************************************************************************
 File Name:     condition_expr.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Wed Nov 11 23:41:20 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
int main(void)
{
    int a = 3;
    int b = 4;
    int z;

    int n = 5;
    float f = 8.0;


    if (a > b)
        z = a;
    else
        z = b;

    printf("z = %0d\n", z);

    z = a > b ? a : b;
    printf("z = %0d\n", z);

    float f1 = n > 0 ? f : n;
    printf("f1 = %0.2f\n", f1);

    int a1[81] = {};

    for (int i = 0; i < 81; i++)
    {
        a1[i] = i;
        printf("%6d%c", a1[i], (i%10==9 || i == (81 - 1)) ? '\n' : ' ');
    }

    printf("You have %d item%s.\n", n, n == 1 ? "" : "s");

    return 0;
}
