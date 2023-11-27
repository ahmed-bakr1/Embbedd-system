/*
 ============================================================================
 Name        : ass5.c
 Author      : re
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define Area(l)(3.14*(l)*(l))

int main(void) {
	float len;
	float area ;
	printf("Enter the radius :" );
	scanf("%f",&len);
	printf("Area :%.2f ",Area(len));
}
