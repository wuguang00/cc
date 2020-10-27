/**************************************************************************
 File Name:     chararray.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sun Oct 18 10:58:45 2020
 Release Notes: getline is a system function. You can't use it. 
 **************************************************************************/
#include<stdio.h>
#define MAXLINE 1000        // the maximum number for lines.

int max;

char line[MAXLINE];
char longest[MAXLINE];

int get_line(void);
void copy(void);

// print the longest line.
int main()
{
    int len;
    extern int max;
    extern char longest[MAXLINE];

    max = 0;

    while ((len = get_line()) > 0)
    {
        if (len > max)
        {
            max = len;
            copy();
        }
    }
    if (max > 0)
    {
        printf("%s", longest);
    }

    return 0;
}

int get_line(void)
{
    int c, i;
    extern char line[];
    for (i = 0; i < ( MAXLINE - 1) && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}

void copy()
{
    int i;
    extern char line[], longest[];
    i = 0;
    while((longest[i] = line[i]) != '\0')
        ++i;

}

