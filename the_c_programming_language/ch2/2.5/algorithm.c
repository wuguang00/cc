/**************************************************************************
 File Name:     algorithm.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Fri Nov  6 00:03:50 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

int main()
{
    int x = 8;
    int y = 3;
    int z = 8%3;
    printf("8%%3: %d\n", z);

    for (int year = 2000; year < 2401; year++) {
        if (( year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            printf("%d is a leap year.\n", year);
        // else
        //     printf("%d is not a leay year.\n", year);
    }

    return 0;
}
