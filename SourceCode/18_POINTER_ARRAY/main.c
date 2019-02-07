/******************************************************************************
 *
 * Copyright 2019 Barun Corechips All Rights Reserved
 *
 * Project : 18_POINTER_ARRAY
 * Filename : main.c
 * Author : sj.yang
 * Version : 1.0
 *
 *******************************************************************************/
#include <stdio.h>

int main(void)
{
	int arr[5];
	int i=0;
	int *parr = &arr[0];

	printf("\n");

	for(i=0 ; i<5 ; i++)
	{
		arr[i] = 10-i; // array initialization
		printf("arr[%d] | Address %d | Value : %d\n",i,&arr[i],arr[i]);
	}

	printf("The Value of parr is %d\n",parr);
	printf("The Value of arr is %d\n",arr);
	printf("The Value of *parr is %d\n",*parr);
	printf("The Value of *(parr+1) is %d\n",*(parr+1));

	return 0;
}
