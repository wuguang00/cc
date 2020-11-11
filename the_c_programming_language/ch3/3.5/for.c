/**************************************************************************
 File Name:     for.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Thu Nov 12 00:25:15 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
#include<ctype.h>

int atoi(char s[]);

int main(void)
{
    int a;

    for (int i = 0; i < 8; i++)
        printf("%0d: A\n", i);

    a = atoi("+100");
    printf("a: %0d\n", a);

    a = atoi("-180");
    printf("a: %0d\n", a);

    return 0;

    // regular loop for c
    // for (int i = 0; i < 5; i++)
    // forever loop using C code to
    // for(;;)
    //     printf("Hello world.\n");
}

int atoi(char s[])
{
    int i;
    int n;
    int sign;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;

    if (s[i] == '+' || s[i] == '-')
        i++;
    for (n = 0; isdigit(s[i]); i++)
        n = 10*n + (s[i]  - '0');
    return sign * n;

}
