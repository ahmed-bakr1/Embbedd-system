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



struct sum {


	int feet ;
	float inch ;

};


int main(void) {

	struct sum v1,v2,add;

	printf("information for 1st distance");
	printf("Enter feet :");
	scanf("%d" ,&v1.feet);
	printf("Enter inch :");
	scanf("%f" ,&v1.inch);

	printf("information for 2st distance");
	printf("Enter feet :");
	scanf("%d" ,&v2.feet);
	printf("Enter inch :");
	scanf("%f" ,&v2.inch);

	printf("Sum of distances =");
    add.feet = v1.feet + v2.feet;
    add.inch = v1.inch + v2.inch ;

    if (add.inch >12 )
    {
    	add.inch = add.inch-12;
    	add.feet=add.feet+1 ;

    }
    printf("sum of distances = %d -%f", add.feet,add.inch);




}
