/**************************************************************************
 File Name:     ifdef_eg.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Thu Aug 13 23:23:10 2020
 Release Notes: use #if expression #else #endif to reduce compilation quantity.
 **************************************************************************/
#include<stdio.h>

#define LETTER 1
#define RUN 1000000
// use apple clang to compile.
// the LETTER if defined or defined as 0 it won't work for upper case.
int main(void)
{
    char str[20] = "C Language", c;
    int i;
    i = 0;
    while((c=str[i]) != '\0') // assign and at the same time.
    {
        i++;
        #if LETTER
            if (c >= 'a' && c <= 'z')
                c = c - 32;
        #else
            if (c >= 'A' && c <= 'Z')
                c = c + 32;
        #endif
        printf("%c", c);
        printf("%d\n", i);
    }
    printf("\n");

    #ifndef RUN
    printf("RUN have'n been defined. So the clause will be executed.\n\n");
    #endif

    #ifdef RUN
    printf("RUN have been defined. So the clause will be executed. And the value of RUN: %0.8d\n\n", RUN); // use 8 bit to show the number, if less than 8, it will fill 0.
    #endif
        
        
}


