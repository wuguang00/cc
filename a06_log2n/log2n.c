/**************************************************************************
 File Name:     log2n.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sun 30 Aug 2020 06:01:56 PM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

// used for declare the function can be called in this function
static inline int log_2_n_round_up(int n)
{
	int log2n = -1;
	int temp = n;
	while (temp) {
		log2n++;
		temp >>= 1; // another format to assign a value
        printf("temp: %d\n", temp);
	}
	if (n & (n - 1))
		return log2n + 1; /* not power of 2 - round up */
	else
		return log2n; /* power of 2 */
}

int main(void)
{
    int a;
    int b;
    a = log_2_n_round_up(2047);
    printf("%d\n\n", a);
    a = log_2_n_round_up(1024);
    printf("%d\n\n", a);
    return 0;
}

