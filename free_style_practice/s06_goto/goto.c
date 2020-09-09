/**************************************************************************
 File Name:     goto.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Wed Sep  2 00:05:04 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

int main(void)
{
    int i;
    int sum = 0;
    i = 1;
    
    loop: if(i<=100) // the tag for c to handle the related contents.
    {
        sum = sum + i;
        i++;
        goto loop;
    }
    printf("sum of all: %d\n", sum);

}
