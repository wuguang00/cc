/**************************************************************************
 File Name:     arra.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Wed Sep  2 00:05:04 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

int main(void)
{
    int i;
    int a[10];
    for (i = 0; i < 10; i++)
    {
        a[i] = i;
    }
    
    for (i = 9; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }


    int b[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (i = 9; i >= 0; i--)
    {
        printf("b[%0d] = %d\n", i, b[i]);
    }

    for (i = 10; i < 20; i++)
    {
        b[i] = i;
        printf("b[%0d] = %d\n", i, b[i]);
    }
    
    
    return 0;

}
