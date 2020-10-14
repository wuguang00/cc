/**************************************************************************
 File Name:     else_if.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Thu Oct 15 00:56:10 2020
 Release Notes: 
 **************************************************************************/

#include<stdio.h>

int binsearch(int x, int v[], int n);

int main()
{
    int ret;
    int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    ret = binsearch(7, b, 10);

    printf("return value: %0d\n", ret);

    return 0;
}

int binsearch(int x, int v[], int n)
{
    int low;
    int high;
    int mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if ( x < v[mid])
            high = mid - 1;
        else if ( x > v[mid])
            low = mid + 1;
        else // Found matched.
            return mid;
    }

    return -1; // Doesn't match
}
