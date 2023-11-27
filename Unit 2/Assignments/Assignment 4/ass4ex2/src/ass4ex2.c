/*
 ============================================================================
 Name        : ass4ex2.c
 Author      : re
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int fact (int f)
{
  if(f==1)
	  return 1 ;
  else

	  return f*fact(f-1);


}


int main(void) {
	unsigned int n ;
	printf("Enter an positive integer  " );
	fflush(stdin);fflush(stdout);
	scanf("%d" , &n);
	fflush(stdin);
	printf(" Factorial of  %d =  %d" ,n, fact(n) );
}
