/**************************************************************************
 File Name:     countwords.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sun Oct 18 00:34:47 2020
 Release Notes: 
 **************************************************************************/

#include<stdio.h>

#define IN  1
#define OUT 1


int main()
{
    int c;
    int nl;
    int nw;
    int nc;
    int state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);

    return 0;

}
