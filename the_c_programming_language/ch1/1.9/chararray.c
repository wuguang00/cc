/**************************************************************************
 File Name:     chararray.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sun Oct 18 10:58:45 2020
 Release Notes: getline is a system function. You can't use it. 
 **************************************************************************/
#include<stdio.h>
#define MAXLINE 1000        // the maximum number for lines.

int get_line(char s[], int lim);
void copy(char to[], char from[]);

// print the longest line.
int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;

    while ((len = get_line(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
    {
        printf("%s", longest);
    }

    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;
    for (i = 0; i < (lim - 1) && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

void copy(char to[], char from[])
{
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}

