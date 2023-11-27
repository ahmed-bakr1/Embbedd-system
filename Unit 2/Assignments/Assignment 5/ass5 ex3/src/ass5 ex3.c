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

struct Complex {

	float real ;
	float imagine;

};

//struct add ( Complex c1 , Complex c2);

struct Complex add (struct Complex c1 ,struct Complex c2){

	struct Complex sum ;
	sum.real = c1.real +c2.real;
	sum.imagine=c1.imagine+c2.imagine;

	return sum;

}

int main(void) {
	struct Complex v1 ,v2 ,total ;
	printf ("for 1st complex number \n");
	printf ("Enter real and imaginary respectively :");
	scanf("%f%f" ,&v1.real ,&v1.imagine);
	printf ("for 2st complex number \n");
	printf ("Enter real and imaginary respectively :");
	scanf("%f%f" , &v2.real ,&v2.imagine);
	total =add(v1,v2);
	printf("Sum = %f+%fi" ,total.real ,total.imagine);



}
