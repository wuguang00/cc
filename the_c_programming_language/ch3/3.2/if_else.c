/**************************************************************************
 File Name:     if_else.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Thu Oct 15 00:41:46 2020
 Release Notes: 
 **************************************************************************/

#include<stdio.h>

int main()
{
    int n = 1;
    int a = 2;
    int b = 3;
    int z;

    z = 0;
    if (n > 0) // intended to create one warning when execute the generated executable file.
        if (a > b)
            z = a;
        else
            z = b;

    printf("1 -- z = %d\n", z);

    z = 0;
    if (n > 0) {
        if (a > b)
            z = a;
    }
    else
        z = b;

    printf("2 -- z = %d\n", z);

    int s[] = {2, 4, 6};
    z = 0;
    if (n > 0) {
        for (int i = 0; i < n; i++)
            if (s[i] > 0) {
                printf("s[%0d] == %0d", i, s[i]);
            }
    }
    else
        printf("error -- n is negative\n");

    return 0;
}
