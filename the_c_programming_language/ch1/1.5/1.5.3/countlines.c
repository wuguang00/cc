/**************************************************************************
 File Name:     countlines.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sun Oct 18 00:16:50 2020
 Release Notes: 
 **************************************************************************/

#include<stdio.h>

int main()
{
    int c;
    int nl;

    nl = 0; // You must give a initial value for the nl
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nl;
    }
    printf("%0d\n", nl);

    return 0;

}
