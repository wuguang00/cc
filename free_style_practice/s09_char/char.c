/**************************************************************************
 File Name:     char.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Wed Sep  2 00:05:04 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

int main(void)
{
    char c[10] = {'I', ' ', 'a', 'm', ' ', 'a', 'b', 'o', 'y'};
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("%c", c[i]);
        if (c[i] == '\0')
            printf("\n");
    }

    char diamond[][5] = {
        {' ', ' ', '*'}, {' ', '*', ' ', '*'}, {'*', ' ', ' ', ' ', '*'}, {' ', '*', ' ', '*'}, {' ',  ' ', '*'}
    };

    int k;
    int j;

    for (k = 0; k < 5; k++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%c", diamond[k][j]);
        }
        printf("\n");
    }


    char cc;
    printf("\nInput a character from the terminal:\n");
    scanf("%c", &cc);
    printf("%c\n", cc);
    printf("Easy codes, but you should try it yourself and type it yourself. Practice makes perfect.\n");

    char str1[5], str2[5], str3[5];
    printf("\nInput 3 strings from the terminal:\n");
    scanf("%s%s%s", str1, str2, str3);
    printf("%s\n", str1);
    puts(str1);
    printf("%s\n", str2);
    puts(str2);
    printf("%s\n", str3);
    puts(str3);

    char str[13];
    printf("\nInput 1 string from the terminal:\n");
    scanf("%s", str);
    printf("%s\n", str);
    puts(str);

    return 0;
}
