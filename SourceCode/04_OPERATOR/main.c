/******************************************************************************
 *
 * Copyright 2019 Barun Corechips All Rights Reserved
 *
 * Project : 04_OPERATOR
 * Filename : main.c
 * Author : sj.yang
 * Version : 1.0
 *
 *******************************************************************************/

#include <stdio.h>

int main(void)
{
	int num1 = 8;
	int num2 = 3;

	printf("\nµ¡¼À : %d + %d = %d \n", num1, num2, num1 + num2);
	printf("»¬¼À : %d - %d = %d \n", num1, num2, num1 - num2);
	printf("°ö¼À : %d * %d = %d \n", num1, num2, num1 * num2);
	printf("¸ò : %d / %d = %d \n", num1, num2, num1 / num2);
	printf("³ª¸ÓÁö : %d %% %d = %d \n", num1, num2, num1 % num2);

	return 0;
}
