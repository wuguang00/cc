/**************************************************************************
 File Name:     const.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Fri Oct 30 23:58:30 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
int strlen1(char s[]);
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
    printf("\\017: %c\n", BELL);
    printf("\\017: %c\n", BELL);
    printf("\\017: %c\n", BELL);
    printf("\\017: %c\n", BELL);

    #define VTAB1 '\xb'
    printf("\\xb: %c\n", VTAB1);
    #define BELL1 '\x7' // contain a bell warning.
    printf("\\x7: %c\n", BELL1);


    puts("Another section to show the effects of the codes be executed.\n");

    printf("\a\n"); // alarm
    printf("\b\n"); // backspace
    printf("\f\n"); // 
    printf("\n\n"); // 
    printf("\r\n"); // 
    printf("\t\n"); // 
    printf("\v\n"); // 
    printf("\nEnter\n\n\n"); // just used to show the seprator

    printf("\?\n"); // 
    printf("\'\n"); // 
    printf("\"\n"); // 
    puts("\0");     // will be no warning for this kind of case.


    #define MAXLINE 1000
    char line[MAXLINE+1];
    #define LEAP 1                                      // leap year
    int days[31+28+LEAP+31+30+31+30+31+31+30+31+30+31]; // define a variable to contain every day in a year.

    puts("I am a string");
    puts("a, ""I am a string");
    puts( "a, ""I am a string");
    puts( "a, ""I am a string" );
    puts( "a, " "I am a string" ); // puts contain an enter automatically.
    printf( "\na, " "I am a string\n" );

    int len; 
    #define AAAA "I am a string."
    len = strlen1(AAAA);

    printf("%0d\n", len);

    enum boolean {NO, YES};
    printf("%0d\n", NO);
    printf("%0d\n", YES);

    enum escapes { BELL2 = '\a', BACKSPACE = '\b', TAB2 = '\t',
                   NEWLINE = '\n', VTAB2 = '\v', RETURN = '\r'
                 };
    enum months  { JAN = 1,
                   FEB,
                   MAR,
                   APR,
                   MAY,
                   JUN,
                   JUL,
                   AUG,
                   SEP,
                   OCT,
                   NOV,
                   DEC
                 };

    printf("%0d\n", RETURN);
    printf("%0d\n", DEC);

    return 0;
}

int strlen1(char s[])
{
    int i;
    i = 0;
    while(s[i] != '\0')
        ++i;
    return i;
}
