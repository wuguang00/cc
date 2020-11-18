/**************************************************************************
 File Name:     func_basic.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Wed Nov 18 23:57:47 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

#define MAXLINE 1000 /* The maximum lines supported. */

int getline1(char line[], int max);
int strindex(char source[], char searchfor[]);

int dummy() {return 0;}
char pattern[] = "ould";

int main()
{
    char line[MAXLINE];
    int found = 0;
    // line = "Ah Love! could you and I with Fate conspire \
    //         To grasp this sorry scheme of things entire \
    //         Would not we shatter it to bits -- and then \
    //         Re-mould it nearer to the Heart's Desire!";

    while (getline1(line, MAXLINE) > 0)
        if (strindex(line, pattern) >= 0)
        {
            printf("%s", line);
            found++;
        }

    dummy();
    dummy();

    return found;
}

int getline1(char s[], int max) {
    int c;
    int i;
    i = 0;
    while (--max > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

int strindex(char s[], char t[]) {
    int i;
    int j;
    int k;
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
        ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}

