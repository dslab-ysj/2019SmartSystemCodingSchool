/******************************************************************************
 *
 * Copyright 2019 Barun Corechips All Rights Reserved
 *
 * Project : 19_POINTER_FUNCTION
 * Filename : main.c
 * Author : sj.yang
 * Version : 1.0
 *
 *******************************************************************************/
#include <stdio.h>

void np_swap(int x, int y); // non-pointer swap function
void p_swap(int* px, int*py); // pointer swap function

int main(void)
{
	int a=3;
	int b=5;

	printf("\n");
	printf("Before Swap : a=%d, b=%d\n",a,b);

	np_swap(a,b);
	printf("[   main()] The results of np_swap() : a=%d, b=%d\n",a,b);

	p_swap(&a,&b);
	printf("[   main()] The results of  p_swap() : a=%d, b=%d\n",a,b);

	return 0;
}

void np_swap(int x, int y)
{
	int temp;

	temp = x;
	x=y;
	y=temp;
	printf("[np_swap()] The results : x=%d, x=%d\n",x,y);
}

void p_swap(int* px, int*py)
{
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
	printf("[ p_swap()] The results : x=%d, x=%d\n",*px,*py);
}
