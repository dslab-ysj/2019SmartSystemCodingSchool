/******************************************************************************
 *
 * Copyright 2019 Barun Corechips All Rights Reserved
 *
 * Project : 13_SWITCH
 * Filename : main.c
 * Author : sj.yang
 * Version : 1.0
 *
 *******************************************************************************/
#include <stdio.h>

int main(void)
{
	char ch='a';
	char CH;

	switch(ch)
	{
	case 'a' :
		CH = 'A';
		break;
	case 'b' :
		CH = 'B';
		break;
	case 'c' :
		CH = 'C';
		break;
	default :
		CH = ' ';
	}

	printf("\nThe capital of %c is %c\n",ch,CH);

	return 0;
}
