/******************************************************************************
 *
 * Copyright 2019 Barun Corechips All Rights Reserved
 *
 * Project : 12_IF
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

	if(ch =='a') CH='A';
	else if(ch =='b') CH='B';
	else if(ch =='c') CH='C';
	else CH=' ';

	printf("\nThe capital of %c is %c\n",ch,CH);

/*
	int phy = 50;
	int che = 100;
	int cal = 90;
	float ave=0;
	char grade;

	ave=(phy+che+cal)/3;

	if(ave>=90) grade='A';
	else if(ave>=80) grade='B';
	else if(ave>=70) grade='C';
	else if(ave>=60) grade='D';
	else grade='F';

	printf("\nAVERAGE : %0.2f\n", ave);
	printf("  GRADE : %c\n",grade);
*/
	return 0;
}
