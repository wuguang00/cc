/**************************************************************************
 File Name:     for.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat Oct 17 08:13:42 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

int main()
{
    int fahr;
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    {
        printf("%03d %06.2f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 0;

}
