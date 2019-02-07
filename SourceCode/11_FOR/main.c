/******************************************************************************
 *
 * Copyright 2019 Barun Corechips All Rights Reserved
 *
 * Project : 11_FOR
 * Filename : main.c
 * Author : sj.yang
 * Version : 1.0
 *
 *******************************************************************************/
#include <stdio.h>

int main(void)
{
	int dan=9;
	int i=1;

	printf("\n");

	for(i=1 ; i<10 ; i++)
	{
		printf("%d x %d = %d\n", dan, i, dan*i);
	}
	return 0;

}
