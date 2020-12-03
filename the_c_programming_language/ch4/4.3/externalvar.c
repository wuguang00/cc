/**************************************************************************
 File Name:     externalvar.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Fri Dec  4 00:16:31 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#define MAXOP  100      /* The max length for the operation */
#define NUMBER '0'      /* The max length for the operation */

int main(void)
{
    int type;
    double op2;
    char s[MAXOP];
    while ((type = getop(s)) != EOF) {
        switch (type) {
        case NUMBER:
            push(atof(s));
            break;
        case '+':
            push(pop() + pop());
            break;
        case '*':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2;
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
                push(pop() / op2);
            else
                printf("error: zero divisor\n");
            break;
        case '\n':
            printf("\t%.8g\n", pop());
            break;
        default:
            printf("error: unknown command %s\n", s);
            break;
        }
    }
    return 0;
}
