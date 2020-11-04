/**************************************************************************
 File Name:     variablename.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Fri Oct 30 23:26:48 2020
 Release Notes: In this c program, you can use free style to type the relevant codes. 
 **************************************************************************/
#include<stdio.h>

int main()
{
    // Avoid using name with _ at the front of the variable name.
    int _a;
    _a = 789;
    printf("%2d\n", _a);

    int a1 = 4;
    printf("%0d\n", a1);

    int a_1 = 8;
    printf("%0d\n", a_1);

    int a__ = 16;
    printf("%0d\n", a__);

    return 0;
}
