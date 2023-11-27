/*
 ============================================================================
 Name        : ass2.c
 Author      : re
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

		float num1,num2,num3;
		printf("Enter three number:");
		scanf("%f%f%f" , &num1 ,&num2,&num3);
		if (num1>=num2 && num1>=num3)
		{
			printf("Larges number is %.2lf" , num1);
		}

		if (num2>=num1 && num2>=num3)
		{
			printf("Larges number is %.2lf" , num2);
		}

		if (num3>=num1 && num3>=num2)
		{
			printf("Larges number is %.2lf" , num3);
		}

	}
