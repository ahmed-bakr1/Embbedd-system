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
    char V;
    printf("Enter an alphabet : %c " ,V );
    scanf("%c" ,&V);
	if(V=='a'||V=='e'||V=='i'||V=='o'||V=='u'||V=='A'||V=='E'||V=='I'||V=='O'||V=='U')
	{
		printf("%c is vowel " ,V );
	}
	else{

		printf("%c is a consonant", V);
	}


}
