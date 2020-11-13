/**************************************************************************
 File Name:     do_while.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat Nov 14 01:10:38 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
#include<string.h>
void itoa(int n, char s[]);
void reverse(char s[]);

int main(void)
{
    char s[20];

    itoa(18456767, s);

    printf("%s\n", s);
    return 0;
}

void itoa(int n, char s[])
{
    int i;
    int sign;

    if ((sign = n) < 0)
        n = -n;
    i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);

    if (sign < 0)
    s[i++] = '-';
    s[i] = '\0';

    reverse(s);
}

void reverse(char s[])
{
    int c;
    int i;
    int j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
        c = s[i], s[i] = s[j], s[j] = c;
}
