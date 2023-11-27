/*
 ============================================================================
 Name        : ass3.c
 Author      : re
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int C , n ;
	float sum , avg ,num[100];

	printf("Enter the numbers of data ");
	scanf("%d" , &C );
    if (C>100 || C<=0)
    {
    	printf("Error ,Range should be from 1 to 100 , Try Again ");
    	scanf("%d" , &C);
    }
    for(n=0 ; n<C ; n++)
    {
    	printf("%d Enter number " , n+1);
    	scanf("%f" , &num[n]);
    	sum+=num[n];

    }

    avg = sum/C;
    printf("Average = %.2f" , avg);

}
