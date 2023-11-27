/*
 ============================================================================
 Name        : ass3HWex1.c
 Author      : re
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char s [100] ,c;
	int i , num=0;
	printf("Enter a String : ");
	gets(s);
	printf("Enter a Character to find frequency: ");
	scanf("%c" ,&c);
	for (i=0 ; sizeof(s)>i; i++)
	{
		if(s[i]== c)
		{
			num++;

		}


	}
	printf("  Frequency of %c = %d " , c ,num);



}
