/******************************************************************************
 *
 * Copyright 2019 Barun Corechips All Rights Reserved
 *
 * Project : 09_TYPE_TRANS
 * Filename : main.c
 * Author : sj.yang
 * Version : 1.0
 *
 *******************************************************************************/

#include <stdio.h>

int main(void)
{
	double num1 = 100; //정수 100을 double형으로 자동 형 변환
	int num2=3.1415; // double형 실수 3.1415를 int형으로 자동 형 변환

	printf("\n정수 100을 실수로 : %.5f \n", num1);
 	printf("실수 3.1415를 정수로 : %d\n", num2);

	return 0;
}
