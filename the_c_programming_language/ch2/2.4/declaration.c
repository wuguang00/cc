/**************************************************************************
 File Name:     declaration.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Thu Nov  5 00:54:25 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

#define MAXLINE 100 // delaration again, to show the maximum

int main()
{
    int lower, upper, step;
    char c, line[100];
    int lower1;
    int upper1;
    int stpe1;
    char c1;
    char line1[100];

    char esc = '\\'; // one ASCII character.
    int i = 0;
    int limit = MAXLINE + 1;

    printf("MAXLINE: %0d\n", MAXLINE);

    float eps = 1.0e-5;
    const double e = 2.71828182845905;
    const char msg[] = "warning:";
    printf("%s\n", msg);


    return 0;
}
