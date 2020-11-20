/**************************************************************************
 File Name:     argc_argv.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Thu 19 Nov 2020 05:36:35 PM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

int main(int argc, char *argv[])
{
    int i;

    printf("Program name %s.\n", argv[0]);

    if (argc == 2)
    {
        for (i = 0; i < argc; i++)
        {
            printf("The argument[%0d]: is %s\n", i, argv[i]);
        }
    }
    else if ( argc >= 2)
    {
        printf("You have input %0d parameters.", argc);
        for (i = 0; i < argc; i++)
        {
            printf("The argument[%0d]: is %s\n", i, argv[i]);
        }
        printf("Too many arguments supplied.\n");
    }
    else
    {
        printf("One argument expected.\n");
    }
    return 0;
}

