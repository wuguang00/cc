/**************************************************************************
 File Name:     externalvar.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Fri Dec  4 00:16:31 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAXOP  100      /* The max length for the operation */
#define NUMBER '0'		/* Mark the number */

int getch(void);

void ungetch(int);

#define MAXVAL 100
#define BUFSIZE 100

int sp = 0;

double val[MAXVAL];
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g\n", f);
	printf("push - sp: %0d\n", sp);
	printf("f: %f\n", f);
}

double pop(void)
{
	printf("pop - sp: %0d\n", sp);
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}

int getop(char s[])
{
    int i;
	int c;

    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
	printf("the input: %s.\n", s);
    s[1] = '\0';
    if (!isdigit(c) && c != '.')
        return c;
    i = 0;
    if (isdigit(c))
        while (isdigit(s[++i] = c = getch()))
            ;
    if (c == '.')
        while (isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}

char buf[BUFSIZE];
int bufp = 0;
int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}

// If you want to use a function, you must declare it at first in C.
int main(void)
{
    int type;
    double op2;
    char s[MAXOP];
	printf("This is a computer.\n");
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
            push(pop() - op2);
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
