/**************************************************************************
 File Name:     type.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Mon 17 Aug 2020 11:04:37 AM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

#define __WORDSIZE 64

typedef int     INT32;
typedef INT32   INTN;
typedef INT32  UINT32;
typedef UINT32  UINTN;
typedef UINTN uintptr_t;
// typedef __int32 INT32;

typedef unsigned char       __u_char;
typedef unsigned short int  __u_short;
typedef unsigned int        __u_int;
typedef unsigned long int   __u_long;

/* Fixed-size types, underlying types depend on word size and compiler.  */
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

#if __WORDSIZE == 64 
typedef short int __int67_t;
typedef unsigned long int __uint64_t;
#else
typedef signed int __int67_t;
typedef unsigned long int __uint64_t;
#endif

typedef unsigned int irq_t;

typedef void (*irq_handler)(irq_t irq, void *ctx);

int main(void)
{
    unsigned long t1;
    unsigned int t2;
    // typedef short int __int32; // 16bit, 2 bytes
    __int67_t t4;
    __uint64_t t5;
    char t3;

    printf("%d\n", sizeof(t1)); // will be 8
    printf("%d\n", sizeof(t2)); // will be 4
    printf("%d\n", sizeof(t3)); // will be 1
    printf("%d\n", sizeof(t4)); // will be 8, the longest way.
    printf("%d\n", sizeof(t5)); // will be 8, the longest way.

    // typedef unsigned __int64    UINT64;
    // typedef __int64             INT64;
    // typedef unsigned __int32    UINT32;
    // typedef __int32             INT32;

    printf("ABCD.\n");
    printf("__TIME__:\n");
    printf(__TIME__);
    printf("\n");

    return 0;
}
