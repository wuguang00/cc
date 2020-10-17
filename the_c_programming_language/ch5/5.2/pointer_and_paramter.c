/**************************************************************************
 File Name:     pointer_and_paramter.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat Oct 17 00:12:22 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

void swap(int x, int y);
void swap2(int *x, int *y);

#define SIZE 8
// int n, array[SIZE], getint(int *);

int main()
{
    int a = 4;
    int b = 5;
    swap(a, b);
    printf("a: %0d b: %0d\n", a, b);

    swap2(&a, &b);
    printf("a: %0d b: %0d\n", a, b);


    // for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
    {
        ;
    }

    return 0;
}

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swap2(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}




