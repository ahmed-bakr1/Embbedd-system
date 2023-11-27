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

union T_1 {
	char student [32];
	int id;
	float mark;

};

struct T_2 {
	char student [32];
	int id;
	float mark;

};



int main(void) {
     union T_1 A;
	struct T_2 b;

	printf("size of union = %d \n" ,sizeof(A));
	printf("size of structure = %d" ,sizeof(b));


}
