/*
 ============================================================================
 Name        : ass1.c
 Author      : re
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,c=0;
	scanf("%f" , &a);
	scanf("%f" , &b);
	c=a;
	a=b ;
	b=c;
	printf("after swapping value of a =%f" , a);
	printf("after swapping value of b =%f" , b);
