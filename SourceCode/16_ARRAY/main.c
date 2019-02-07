/******************************************************************************
 *
 * Copyright 2019 Barun Corechips All Rights Reserved
 *
 * Project : 16_ARRAY
 * Filename : main.c
 * Author : sj.yang
 * Version : 1.0
 *
 *******************************************************************************/
#include <stdio.h>

int main(void)
{
	int arr[5]={1,2,3,9};
	int i=0;

	printf("\n");

	for(i=0 ; i<5 ; i++)
	{
		printf("arr[%d] = %d \n",i,arr[i]);
	}

	return 0;
}
