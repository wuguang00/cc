/**************************************************************************
 File Name:     func_pointer.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Thu 06 Aug 2020 11:45:46 AM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

void main()
{
    int max(int, int);
    int (* p)(int, int);
    int a;
    int b;
    int c;

    p = max; // p point to max

    // for scanf, you should make sure you can give the correct value for input.
    scanf("%d, %d", &a, &b);

    c =(*p)(a, b);

    printf("a = %d, b = %d, max = %d\n", a, b, c);

    return; // a void function should contain the void return. You can use it like this way.
}

int max(int x, int y)
{
    int z;
    if (x > y) z = x;
    else z = y;
    return(z);
}





