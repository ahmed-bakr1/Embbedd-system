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

	int i, x , sum ;
	sum=0;
    printf("Enter integer ");
	scanf("%d" , &x);
	for(i=0 ; x>=i ; ++i)
	{
		sum +=i ;
	}

	printf("Sum %d" , sum);
}
