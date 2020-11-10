/**************************************************************************
 File Name:     bitop.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Wed Nov 11 01:17:53 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
#define SET_ON 070
unsigned getbits(unsigned x, int p, int n);
int main()
{
    int n = 255;
    n = n & 0177;

    int x = 0;
    x = x | SET_ON;

    printf("n: 0x%0x\n", n);
    printf("x: 0x%0x\n", x);

    x = 255;
    x = x & ~077;
    printf("x: 0x%0x\n", x);

    x = 0x1c;
    x = getbits( x, 4, 3);
    printf("1 - function: 0x%0x\n", x);
    printf("1 - function: %0d\n", x);

    x = 0xc3;
    x = getbits( x, 4, 3);
    printf("2 - function: 0x%0x\n", x);
    printf("2 - function: %0d\n", x);

    x = 0xff;
    x = getbits( x, 4, 3);
    printf("3 - function: 0x%0x\n", x);
    printf("3 - function: %0d\n", x);

    return 0;
}

unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}
