/**************************************************************************
 File Name:     for.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Thu Nov 12 00:25:15 2020
 Release Notes: 
 **************************************************************************/
// Standard library function.
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int atoi(char s[]);
void shellsort(int v[], int n);
void reverse(char s[]);

int main(void)
{
    int a;
    int i;
    for (i = 0; i < 8; i++)
        printf("%0d: A\n", i);

    a = atoi("+100");
    printf("a: %0d\n", a);

    a = atoi("-180");
    printf("a: %0d\n", a);

    int v[] = {8, 34, 5, 6, 9, 23, 22, 21, 10, 11, 16, 17, 29, 39, 40, 7};

    char s[] = "can you help me ?";

    reverse(s);
    printf("%s\n", s);

    // when programming, using while or for
    // while((c = getchar()) == ' ' || c == '\n' || c == '\t')
    // ; // jump over space
    // for (i = 0; i < n; i++)
    // ...

    shellsort(v, 16);   // give the name of the array as the parameters

    for (i = 0; i < 16; i++)
        printf("v[%0d]: %0d\n", i, v[i]);


    return 0;

    // regular loop for c
    // for (int i = 0; i < 5; i++)
    // forever loop using C code to
    // for(;;)
    //     printf("Hello world.\n");
}

int atoi(char s[])
{
    int i;
    int n;
    int sign;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;

    if (s[i] == '+' || s[i] == '-')
        i++;
    for (n = 0; isdigit(s[i]); i++)
        n = 10*n + (s[i]  - '0');
    return sign * n;

}

void shellsort(int v[], int n)
{
    int gap;
    int i;
    int j;
    int temp;

    for (gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && v[j] > v[j+gap]; j -= gap)
            {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
}

void reverse(char s[])
{
    int c;
    int i;
    int j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
        c = s[i], s[i] = s[j], s[j] = c;
    // {
    //     c = s[i];
    //     s[i] = s[j];
    //     s[j] = c;
    // }
}
