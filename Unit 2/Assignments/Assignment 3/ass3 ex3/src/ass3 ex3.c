#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int r , c , i ,j;
	int ele [10][10] , trans[10][10];

	printf("Enter Rows and Column of matrix : ");
	scanf("%d %d"  ,&r ,&c);
	for (i=0 ;i<r; ++i )
	{
		for(j=0;j<c; ++j )
		{
			printf("Enter elements of a%d%d :  " ,i+1 ,j+1 );
			scanf("%d" ,&ele[i][j]);
		}

	}


printf(" \n Entered Matrix : \n ");
	for (i=0 ;i<r; ++i )
	{

		for(j=0;j<c; ++j )
		{

			printf("%d" , ele[i][j] );
			if(j==c-1)
			printf("\n \n");
		}


	}
printf(" \n Transpose of Matrix : \n ");
	for (i=0 ;i<r; ++i )
	{

		for(j=0;j<c; ++j )
		{
			trans[j][i]=ele[i][j];



		}


	}

		for (i=0 ;i<c; ++i )
	{

		for(j=0;j<r; ++j )
		{

			printf("%d " , trans[i][j]);
			if (j==r-1)
				printf(" \n \n");



		}


	}




}
