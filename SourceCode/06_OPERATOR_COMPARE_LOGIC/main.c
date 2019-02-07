/******************************************************************************
 *
 * Copyright 2019 Barun Corechips All Rights Reserved
 *
 * Project : 06_OPERATOR_COMPARE_LOGIC
 * Filename : main.c
 * Author : sj.yang
 * Version : 1.0
 *
 *******************************************************************************/

#include <stdio.h>

int main(void)
{
	int A = 10;
	int B = 8;
	printf("\nA<B ... %d \n", A<B);
	printf("A>B ... %d \n", A>B);
	printf("A==B ... %d \n", A==B);
	printf("A!=B ... %d \n", A!=B);
	printf("A<=B ... %d \n", A<=B);
	printf("A>=B ... %d \n", A<=B);

	int C=1; // TRUE
	int D=0; // FALSE
	printf("C&&D ... %d \n", C&&D);
	printf("C||D ... %d \n", C||D);
	printf("!C ... %d \n", !C);

	return 0;

}
