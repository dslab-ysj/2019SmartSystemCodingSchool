/******************************************************************************
 *
 * Copyright 2019 Barun Corechips All Rights Reserved
 *
 * Project : 05_OPERATOR_COMPLEX
 * Filename : main.c
 * Author : sj.yang
 * Version : 1.0
 *
 *******************************************************************************/

#include <stdio.h>

int main(void)
{
	int a = 1;
	int b = 2;
	int c = 0;

	printf("\na=%d, b=%d, ", a,b);
	c = a + b;
	printf("a + b -> %d, a+=b -> %d \n", c, a+=b);

	return 0;
}
