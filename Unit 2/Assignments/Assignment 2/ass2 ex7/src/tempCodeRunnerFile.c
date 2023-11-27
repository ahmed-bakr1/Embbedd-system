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

//	int i, x , f ;
//	f=1;
//  printf("Enter integer ");
//	scanf("%d" , &x);
//	for(i=1 ; x >= i ; ++i)
//	{
//		f *= i ;
//	}
//
//	printf("Sum %d" , f);


	unsigned long int  f ;
	int x , i ;
	f=1;
	printf("Enter integer ");
	scanf("%d" , &x);

    if (x < 0)
        printf("Error!!! Factorial of a negative number doesn't exist.");
    else if(x== 0)
	{
    	printf(" Factorial of %d is " ,f );
	}

    else  {
	for(i=1 ; x >= i ; ++i)
	{
		f *= i ;
	}

	printf(" Factorial of %d is %llu" ,x, f);

    }
}
