
/**************************************************************************
 File Name:     compare3numberseg.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Fri 07 Aug 2020 04:55:09 PM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
int main(void)
{
    void swap(int * p1, int * p2);
    int *p1;
    int *p2;
    int a;
    int b;

    a = 1;
    b = 9;
    p1 = &a;
    p2 = &b;

    printf("a = %d, b = %d\n", a, b);
    swap(p1, p2);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int * p1, int * p2)
{
    int p;
    p = *p1; // process the value stored in &a;
    *p1 = *p2; // process the value stored in &b;
    *p2 = p;
}
