/******************************************************************************
 *
 * Copyright 2019 Barun Corechips All Rights Reserved
 *
 * Project : 15_GLOBAL_LOCAL
 * Filename : main.c
 * Author : sj.yang
 * Version : 1.0
 *
 *******************************************************************************/
#include <stdio.h>

void function1(void);
void function2(void);

int global_var = 0;

int main(void)
{
	int local_var = 0;
	local_var++;
	global_var++;

	printf("\n");

	printf("global_val of main is %d \n", global_var);
	printf(" local_val of main is %d \n", local_var);

	function1();
	function2();

	return 0;
}

void function1(void)
{
	int local_var = 0;
	local_var++;
	global_var++;

	printf("global_val of function1 is %d \n",global_var);
	printf(" local_val of function1 is %d \n",local_var);

}

void function2(void)
{
	int local_var = 0;
	local_var++;
	global_var++;

	printf("global_val of function2 is %d \n",global_var);
	printf(" local_val of function2 is %d \n",local_var);

}
