/**************************************************************************
 File Name:     const.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Fri Oct 30 23:58:30 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

// const
// Use macro as the const

int main()
{
    int a = 1234;
    long b = 1234567890L;
    unsigned long int c = 1234567890ul;
    float f1 = 123.4;
    float f2 = 1e-2;
    double f3 = 1e-2;
    double f4 = 123.4;
    
    printf("aaaa" "bbbb\n" "Can you help to try this clause in the terminal.\n");
    printf("aaaa" "bbbb\n");

    printf("%ld\n", b);     // you can type use the type long d.
    printf("%ld\n", c);

    printf("%f\n", f1);
    printf("%f\n", f2);
    printf("%f\n", f3);
    printf("%f\n", f4);

    int o1 = 037;
    printf("%d\n", o1);
    int o2 = 0377;
    printf("%d\n", o2);
    int o3 = 0xF;
    printf("%d\n", o3);
    int o4 = 0xFF;
    printf("%d\n", o4);

    unsigned long int o5 = 0xFUL;
    printf("%lu\n", o5);  // Use the matched format to print.

    int o6 = 'a';
    printf("%d\n", o6);
    printf("%c\n", o6);

    int o7 = '\x62';
    printf("\\x62: %c\n", o7);

    int o8 = '\141';
    printf("\\141: %c\n", o8);

    puts("This is a test. Just used for test.\n");

    #define VTAB '\013'
    printf("\\013: %c\n", VTAB);
    #define BELL '\017'
    printf("\\017: %c\n", BELL);


    return 0;
}
