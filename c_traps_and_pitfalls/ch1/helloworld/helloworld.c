/**************************************************************************
 File Name:     helloworld.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Wed 09 Sep 2020 10:56:22 AM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
#define N 8
void main()
{
    printf("Hello, world!\n");
    int i;

    int a[N]; // the book tells me it will go into dead loop, I didn't find the phenomenon
    for(i = 0; i <= N; i++)
        a[i] = 0;

	// try to print the content of the array
    for(i = 0; i <= N; i++)
    {
        printf("a[%0d] = %d\n", i, a[i]);
    }
}
