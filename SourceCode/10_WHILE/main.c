/******************************************************************************
 *
 * Copyright 2019 Barun Corechips All Rights Reserved
 *
 * Project : 10_WHILE
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
	while(i<10)  // 반복문의 조건
	{
		printf("%d x %d = %d\n", dan, i, dan*i);
		i++;
	}
	return 0;

}
