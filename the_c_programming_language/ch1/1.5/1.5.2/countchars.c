/**************************************************************************
 File Name:     countchars.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat Oct 17 08:46:31 2020
 Release Notes: 
 **************************************************************************/

#include<stdio.h>

int main()
{
    // long nc;
    // while (getchar() != EOF)
    //     ++nc;
    // printf("%ld\n", nc);

    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
    {
        ;
    }

    printf("%.0f\n", nc);

    return 0;

}
