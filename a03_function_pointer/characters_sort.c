/**************************************************************************
 File Name:     characters_sort.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Thu 06 Aug 2020 05:38:12 PM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
#include<string.h>

void main()
{
    void sort(char * name[], int n);
    void print(char * name[], int n);
    void print1(char * name[], int n);
    char * name[] = {"Follow me", "BASIC", "Great Wall", "FORTRAN", "Computer design"}; // define and assign the value.
    int n = 5;
    sort(name, n);
    print(name, n);
    printf("Again, the sting after sort will be printed again.\n\n");
    print1(name, n);
}

// use strcmp function as the basic
void sort(char * name[], int n)
{
    char * temp;
    int i, j, k;
    for(i = 0; i < n - 1; i++)
    {
        k = i;
        for(j = i + 1; j < n; j++)
        {
            if(strcmp(name[k], name[j]) > 0) k = j;
        }
        if(k != i)
        { // swap the content.
            temp = name[i];
            name[i] = name[k];
            name[k] = temp;
        }
    }
}


void print(char * name[], int n) {
    int i;
    for(i = 0; i < n; i++)
        printf("%s\n", name[i]);
}

void print1(char * name[], int n) {
    int i = 0;
    char * p;
    p = name[0];
    while(i < n) {
        p = *(name+i++);
        printf("%s\n", p);
    }
}





