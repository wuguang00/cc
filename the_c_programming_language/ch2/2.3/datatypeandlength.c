/**************************************************************************
 File Name:     datatypeandlength.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Fri Oct 30 23:36:15 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

int main()
{
    char        vara;    // usual unsigned 8 bits;
    int         varb;    // the length of a natural interge
    float       f1;      // float type
    double      b1;      // double float type

    short int   sh;
    short       sh1;
    long int    count;
    long double count1;
    vara = 97;
    varb = 65;
    printf("%C\n", vara);
    printf("%c\n", varb);
    printf("%D\n", vara);

    puts("This is a test. Just used for test.\n");

    return 0;
}
