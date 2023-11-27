/*
 ============================================================================
 Name        : test.c
 Author      : re
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int prime (int c){

	int re;
	re= c%2 ;
	if (re==1){
		return re ;
	}

}

int main() {

	int min , max , ch ,sw ;
	printf("Enter two numbers (intervals) : ");
	fflush(stdin);fflush(stdout);
    scanf("%d %d" , &min, &max);
    if(min>max)
    	{}
    printf(" Prime numbers between 10 and 30 are :");

for (min=(min+1); max >min ; min++)
{
	   ch =prime(min);
	   if (ch ==1) {
		   printf(" %d\t" , min);
	   }

}




}
