/**************************************************************************
 File Name:     main.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Wed 09 Sep 2020 07:45:19 PM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
#include<string.h>
void main()
{
    struct {
        int a;
        int b;
        char s[8];
    } *p;
    p->s = "->";

    printf("\n");
}
