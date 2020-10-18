/**************************************************************************
 File Name:     array.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sun Oct 18 09:17:07 2020
 Release Notes: 
 **************************************************************************/

#include<stdio.h>

int main()
{
    int c;
    int i;
    int nwhite;
    int nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }

    printf("digits = ");
    for (i = 0; i < 10; ++i)
        printf(" %0d:%d", i, ndigit[i]);

    printf(", white space = %d, other = %d\n", nwhite, nother);

    return 0;

}
