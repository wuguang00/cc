/**************************************************************************
 File Name:     break_continue.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat 14 Nov 2020 01:06:51 PM CST
 Release Notes: 
 **************************************************************************/

#include<stdio.h>

int main(void)
{
    int i;
    int j;

    int daa[10] = {3,   2,  1,  4,  5,  8,  7,  9, 10, 11};
    int dab[10] = {11, 12, 23, 34, 55, 88, 78, 92, 21, 52};

    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            if (daa[i] == dab[j])
                goto found;

    found:
    {
        printf("daa[%0d]: %d, dab[%0d]: %d\n", i, daa[i], j, dab[j]);
        goto another;
    }

    another:
        printf("Again: daa[%0d]: %d, dab[%0d]: %d\n", i, daa[i], j, dab[j]);

    return 0;
}
