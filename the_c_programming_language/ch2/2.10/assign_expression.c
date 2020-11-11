/**************************************************************************
 File Name:     assign_expression.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Wed Nov 11 08:17:23 2020
 Release Notes: 
 **************************************************************************/

#include<stdio.h>
int bitaccount(unsigned x);

int main(void)
{
    int i = 128;

    i = i + 2;
    printf("%0d\n", i);

    i += 2;
    printf("%0d\n", i);

    i -= 2;
    printf("%0d\n", i);

    i *= 2;
    printf("%0d\n", i);

    i /= 2;
    printf("%0d\n", i);

    i %= 7;
    printf("i%%7: %0d\n", i);

    i <<= 2;
    printf("%0d\n", i);

    i >>= 2;
    printf("%0d\n", i);

    i &= 7;
    printf("%0d\n", i);

    i ^= 2;
    printf("%0d\n", i);

    i |= 2;
    printf("%0d\n", i);

    i = 8;
    i *= 8 + 1; // expr1 = (expr1) op (expr2)   <=> expr op= expr2

    printf("72: %0d\n", i);

    i = bitaccount(255);
    printf("bitaccount(255): %0d\n", i);

    i = bitaccount(4095);
    printf("bitaccount(4095): %0d\n", i);

    return 0;
}

int bitaccount(unsigned x)
{
    int b;
    for (b = 0; x != 0; x >>= 1)
        if (x & 01)
            b++;
    return b;
}
