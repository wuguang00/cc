/**************************************************************************
 File Name:     selfadd.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Tue Nov 10 00:18:43 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

void squeeze(char s[], int c);
void squeeze1(char s[], int c);
void strcat1(char s[], char t[]);

int main()
{
    char c = '\n';
    int n1 = 0;
    if (c == '\n')
        ++n1;
    printf("%d\n", n1);

    int x;
    x = ++n1;
    printf("%d\n", x++); // got 2

    x = n1++;
    printf("%d\n", ++x); // got 2


    // handle the chars[], or  string.
    char a[80] = "abcdefg abcdefg abcdefg ";
    char t[40] = "abcdefg abcdefg abcdefg ";

    squeeze(a, 'g');

    printf("%s\n", a);

    strcat1(a, t);
    printf("%s\n", a);


    return 0;
}

void squeeze(char s[], int c)
{
    int i;
    int j;
    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

void squeeze1(char s[], int c)
{
    int i;
    int j;
    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c) {
            s[j] = s[i];
            j++;
        }
    s[j] = '\0';
}

void strcat1(char s[], char t[])
{
    int i;
    int j;
    i = j = 0; // Must initial for use.

    while (s[i] != '\0')
        i++;
    while ((s[i++] = t[j++]) != '\0')
        ;
}
