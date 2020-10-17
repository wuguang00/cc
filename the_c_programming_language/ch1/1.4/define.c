/**************************************************************************
 File Name:     define.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat Oct 17 08:21:12 2020
 Release Notes: sign of variable
 **************************************************************************/
#include<stdio.h>

#define     LOWER   0       // You should not put a ; at the end of this line
#define     UPPER   300
#define     STEP    20

int main()
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%03d %06.2f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 0;

}
