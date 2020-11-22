/**************************************************************************
 File Name:     retval.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sun 22 Nov 2020 12:13:12 AM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
#include<ctyp.h>

double atof(char s[]) {
    double val;
    double power;
    int i;
    int sign;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }

    return sign * val / power;
}

int main(void)
{

    double sum;
    double atof(char []);

    int getline(char line[], int max);
    sum = 0;
    while (getline(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));

    return 0;
}

