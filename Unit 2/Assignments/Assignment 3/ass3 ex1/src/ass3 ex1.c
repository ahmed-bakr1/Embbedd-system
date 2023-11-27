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
	float num1 [2][2];
	float num2 [2][2];
	float Sum [2][2];
	int r,c =0 ;


	for (r=0 ;r<2 ;r++)
	{
		for (c=0 ;c<2 ;c++)
			{

				scanf("%f" , &num1[r][c]);
				fflush(stdin);fflush( stdout );
			}
	}

	for (r=0 ;r<2 ;r++)
		{
			for (c=0 ;c<2 ;c++)
				{
				    printf("b%d %d " , r+1 , c+1);
					scanf("%f" , &num2[r][c]);
					fflush(stdin);fflush( stdout );
				}
		}

	for (r=0 ;r<2 ;r++)
			{
				for (c=0 ;c<2 ;c++)
					{
					    Sum[r][c]=num1[r][c]+num2[r][c];
					    printf("%.1f\t" , Sum[r][c]);
					    if (c==1)
					    printf("\n");
					    fflush(stdin);fflush( stdout );


					}


			}


}
