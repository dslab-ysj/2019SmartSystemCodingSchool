/******************************************************************************
 *
 * Copyright 2019 Barun Corechips All Rights Reserved
 *
 * Project : 14_FUNCTION
 * Filename : main.c
 * Author : sj.yang
 * Version : 1.0
 *
 *******************************************************************************/
#include <stdio.h>

void f_Print(void);
int f_Sum(int num1, int num2);

int main(void)
{
	int a = 10;
	int b = 20;
	int sum_ab=0;

	printf("\n");
	f_Print();

	sum_ab=f_Sum(a,b);
	printf("The sum of %d and %d is %d\n",a,b,sum_ab);
	return 0;
}

void f_Print(void)
{
	printf("f_Print Function \n");
}

int f_Sum(int num1, int num2)
{
	return num1 + num2;
}
