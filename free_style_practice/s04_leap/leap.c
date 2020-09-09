/**************************************************************************
 File Name:     leap.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Tue Sep  1 23:50:33 2020
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

int main()
{
	unsigned int year;
	unsigned int leap;
	printf("Please input a year as you like.\n");
	scanf("%d", &year); // the & should be used with scanf
	if(year%4 == 0)
	{
		if(year%100 == 0)
		{
			if(year%400 == 0)
				leap = 1;
			else
				leap = 0;
		}
		else
			leap = 1;
	}
	else
		leap = 0;

	if (leap == 1)
		printf("%d is ", year);
	else
		printf("%d is not ", year);

	printf("a leap year.\n");
	printf("the address of year: 0x%0x", &year);
	printf("the address of leap: 0x%0x", &leap);

	return 0;
}


