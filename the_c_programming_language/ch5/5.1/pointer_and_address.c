/**************************************************************************
 File Name:     pointer_and_address.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Thu Oct 15 23:34:20 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

int main()
{
    char c;

    char *p = &c;
    c = 'c';

    printf("%c\n", c);
    printf("%c\n", *p);

    int x = 1;
    int y = 2;
    int z[10];

    int *ip;
    int *iq;

    ip = &x;
    printf("%0d\n", *ip);
    y = *ip;
    printf("%0d\n", y);
    *ip = 0;
    printf("%0d\n", *ip);
    printf("%0d\n", x);

    printf("\nuse the array and pointer.\n");
    ip = &z[0];
    for (int i = 0; i < 10; i++) {
        z[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        printf("%0d\n", *ip);
        ip++;
    }

    printf("\nAnother format to use the array and pointer.\n");
    ip = z;
    for (int i = 0; i < 10; i++) {
        z[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        printf("%0d\n", *ip);
        ip++;
    }

    ip = &x;
    *ip = *ip + 100;
    printf("%0d\n", *ip);

    y = *ip + 1;
    printf("%0d\n", y);

    *ip += 10;
    printf("%0d\n", *ip);

    ++*ip;
    printf("%0d\n", *ip);

    (*ip)++;
    printf("%0d\n", *ip);

    iq = ip;
    printf("%0d\n", *iq);

    return 0;
}
