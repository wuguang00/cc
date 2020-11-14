/**************************************************************************
 File Name:     break_continue.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat 14 Nov 2020 01:06:51 PM CST
 Release Notes: 
 **************************************************************************/

#include<stdio.h>

#include<string.h>

int trim(char s[]);

int main(void)
{
    int i;
    int n;

    char s[] = " abcd efgd                      ";
    n = trim(s);

    printf("%d\n", n);

    int da[] = { 3, -1, 5, -7, 8, 32, 2, 7, -4};

    for (i = 0; i < n; i++)
        if (da[i] < 0)
            continue;
        else
            printf("da[%0d]: %d\n", i, da[i]);


    return 0; // for this compiler, you should add this clause to make it no error.
}

int trim(char s[])
{
    int n;
    for (n = strlen(s) - 1; n >= 0; n--)
        if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
            break;
    s[n+1] = '\0';

    return n;

}
