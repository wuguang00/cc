/**************************************************************************
 File Name:     File.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Fri 28 Aug 2020 10:24:32 AM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE *fptr;
    int num;
    fptr = fopen("new.txt", "w");
    if(fptr == NULL)
    {
        printf("HHHHHH\n");
    }
    printf("Herllo world.\n");
    fprintf(fptr, "I have create a file in C programming..\n");
    fscanf(fptr, "I have create a file in C programming...%d\n", num);
    printf("I have create a file in C programming..\n");

    fclose(fptr);
    return 0;
}
