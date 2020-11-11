/**************************************************************************
 File Name:     priority.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Thu Nov 12 00:04:18 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
int power( int a, int b);
int main(void)
{
    int n = 2;

    printf("%d %d\n", ++n, power(2, n));

    printf("%d %d\n", power(2, n), ++n);
    n++;
    printf("%d %d\n", power(2, n), n);

    return 0;
}

int power( int a, int b)
{
    return a + b;
}
