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
    char Check;
    printf("enter your character ");
    scanf("%c" , &Check);
	if (Check >= 'A' && Check <= 'Z' || Check >='a' && Check <= 'z')
	{
		printf("%c is alphabet" , Check);
	}
	else

		printf("%c is not alphabet" , Check);
}
