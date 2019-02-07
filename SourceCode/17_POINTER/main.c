/******************************************************************************
 *
 * Copyright 2019 Barun Corechips All Rights Reserved
 *
 * Project : 17_POINTER
 * Filename : main.c
 * Author : sj.yang
 * Version : 1.0
 *
 *******************************************************************************/
#include <stdio.h>

int main(void)
{
	int num = 10;
	int *pnum = &num;

	printf("\n");

	printf("The Address of num is %d\n",pnum);
	printf("The Address of num is %d\n",&num);
	printf("The Value of num is %d\n",*pnum);
	printf("The Value of num is %d\n",num);

	return 0;
}
