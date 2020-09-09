/**************************************************************************
 File Name:     pcomp.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Thu Aug 20 08:12:25 2020
 Release Notes: 
 **************************************************************************/

#include<stdio.h>
int main(void)
{
    int *p1, *p2, *p, a, b;

    printf("Please input two numbers eg: 4,5\n");
    scanf("%d,%d", &a, &b);

    p1 = &a;
    p2 = &b;

    if (a < b) {
        p = p1;
        p1 = p2;
        p2 = p;
    }

    printf("a = %0d, b = %0d\n\n", a, b);
    printf("max = %0d, min = %0d\n\n", *p1, *p2);

    a = 189;
    b = 234;

    printf("*p1 = %0d, *p2 = %0d\n\n", *p1, *p2);
    return 0;

}
