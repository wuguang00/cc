/**************************************************************************
 File Name:     compare.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat 01 Aug 2020 09:33:02 AM CST
 Release Notes: Typed a small case for practice.
 **************************************************************************/
#include<stdio.h>

void main()
{

    int a;
    int b;
    int c;

    int max(int x, int y); // declare a function

    // Input the value a and b. The usage of scanf, you should familiar with it again.
    // You must use scanf like this to add &a and &b to store the value.
    scanf("%d\n%d", &a, &b);

    c = max(a, b);

    printf("max = %d\n", c);
}

int max(int x, int y)
{
    int z;
    if (x > y)
        z = x;
    else
        z = y;
    return(z);
}
