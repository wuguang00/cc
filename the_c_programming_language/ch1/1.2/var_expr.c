/**************************************************************************
 File Name:     var_expr.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat Oct 17 07:58:05 2020
 Release Notes: fahr, celsius 
 **************************************************************************/
#include<stdio.h>

int main()
{
    int fahr, celsius;          // the int type
    float fahrf, celsiusf;      // the float type
    int lower, upper, step;


    lower = 0;      // the minimum
    upper = 300;    // the maximum
    step = 20;      // step

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;      // the formula from fahr to celsius
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;      // the formula from fahr to celsius
        printf("%3d %6d\n", fahr, celsius);
        fahr = fahr + step;
    }


    fahrf = lower;
    while (fahrf <= upper) {
        celsiusf = 5.0 * (fahrf - 32) / 9.0;      // the formula from fahrf to celsiusf
        printf("%3.0f\t%6.1f\n", fahrf, celsiusf);
        fahrf = fahrf + step;
    }

    return 0;

}
