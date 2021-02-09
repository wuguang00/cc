/**************************************************************************
 File Name:     register.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Tue Feb  9 08:43:43 2021
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

void f(register unsigned m, register long n);

int main(void)
{
    register int x;
    register char y;
    x = 6;
    y = 'a';

	printf("x: %0x.\n", x);
	printf("y: %c.\n", y);

    f(x, y);

    return 0;
}

void f(register unsigned m, register long n)
{
    register int i;
    i = 8;
    printf("temp i: %0d.\n", i);
    printf("temp m: %0d.\n", m);
    // printf("temp n: %0e.\n", n); // will get a warning.
    printf("temp n: %ld.\n", n);
    printf("temp n: %lu.\n", n);
    return ;
}
