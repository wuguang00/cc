/**************************************************************************
 File Name:     switch.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Thu Nov 12 00:15:57 2020
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

    nwhite = 0;
    nother = 0;

    for (i = 0; i < 10; i++)
    {
        ndigit[i] = 0;
    }
    while((c = getchar()) != EOF)
    {
        switch (c)
        {
            case '0': case'1': case '2': case'3': case'4':
            case '5': case'6': case '7': case'8': case'9':
                ndigit[c-'0']++;
                break;
            case ' ':
            case '\n':
            case '\t':
                nwhite++;
                break;
            default:
                nother++;
                break;
        }
    }

    printf("digits = ");
    for (i = 0; i < 10; i++)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);

    return 0;
}
