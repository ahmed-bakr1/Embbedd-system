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

	float num1 , num2 , sum ;
	char operator;

	printf("Enter operator either + or - or * or / ");
	scanf("%c" , &operator);


	printf("Enter two operands: ");
	scanf("%f" , &num1);
	scanf("%f" , &num2);

	switch (operator) {
	case '+':
		sum= num1+num2;
		printf("%.1lf" , sum );
		break;
	case '-':
		sum= num1-num2;
		printf("%.1lf" , sum );
		break;
	case '*':
		sum= num1*num2;
		printf("%.1lf" , sum );
		break;
	case '/':
		sum= num1/num2;
		printf("%.1lf" , sum );
		break;


	}

}
