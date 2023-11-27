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
    int Num;
    printf("Enter your integer : ");
	scanf ("%d" , &Num);
	int z = Num % 2 ;
	if(z == 0)
	{
		printf("%d is even" , z);
	}
	else {

		printf("%d is odd" , z);

	}
	return 0 ;
}
