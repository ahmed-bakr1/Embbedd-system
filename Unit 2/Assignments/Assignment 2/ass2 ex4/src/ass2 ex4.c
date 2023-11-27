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
	float num ;
	printf(" enter number");
	scanf("%f" , & num);
	if (num < 0 )
	{
		printf("You entered negative")	;

	}
	else if (num > 0 )
	{
		printf("You entered Positive")	;

	}
	else
		printf("Your entered Zero");

}


