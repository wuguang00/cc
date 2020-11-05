/**************************************************************************
 File Name:     typetransfer.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Fri Nov  6 00:12:15 2020
 Release Notes: 
 **************************************************************************/

#include<stdio.h>

int atoi(char s[])
{
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
    {
        n = 10 * n + (s[i] - '0');
        printf("%0d: %0d\n", i, s[i] - '0');
    }
    return n;
}


int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

int main()
{

    char a[8];
    for (int j = 0; j < 8; j++)
        a[j] = '1' + j;

    int b;

    b = atoi(a);

    printf("%d\n", b);


    printf("%c\n", lower('a'));
    printf("%c\n", lower('b'));
    printf("%c\n", lower('C'));
    printf("%c\n", lower('D'));



    return 0;

}
