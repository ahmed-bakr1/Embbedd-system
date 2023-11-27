/*
 ============================================================================
 Name        : ass4ex3.c
 Author      : re
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>





void reserve ()
{

	char re ;
	scanf("%c" , &re);
	if(re !='\n'){
		reserve();
		printf("%c" , re);

	}
}

int main(void) {


printf ("Enter a sentence  " );
fflush(stdin);fflush(stdout);
reserve();




}
