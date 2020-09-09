/**************************************************************************
 File Name:     weakeg.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Fri 07 Aug 2020 04:55:09 PM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

// 2 ways for show the features for weak 
// below is an example for weak sign, weak is weak, pick up which one is not important.
// void __attribute__((weak)) func1(void)

// __attribute__((weak)) void func1(void) // another format

// void func1(void)__attribute__((weak))  // another format again

// another way


#include<stdio.h> // what will happen if it happens again: result, you can include 2 times, nothing will happen.

// way 1-1:
// void __attribute__((weak)) func1(void)
// {
//     printf("Can't find the define of %s!\n", __FUNCTION__); // use the macro to show the name of the function
// }


// way 1-2:
// __attribute__((weak)) void func1(void) // another format
// {
//     printf("Can't find the define of %s!\n", __FUNCTION__); // use the macro to show the name of the function
// }

// way 1-3: this will cause the compilation failure.
// void func1(void)__attribute__((weak))  // another format again
// {
//     printf("Can't find the define of %s!\n", __FUNCTION__); // use the macro to show the name of the function
// }

#define __weak __attribute__((weak)) // Macro, extend from GNU compiler, be supported by ARM Compiler.

// way 2: use this way, I don't know why

#pragma weak func1

void func1(void)
{
    printf("Can't find the define of %s!\n", __FUNCTION__); // use the macro to show the name of the function
}

int main(void)
{
    func1();
    return 0;
}

