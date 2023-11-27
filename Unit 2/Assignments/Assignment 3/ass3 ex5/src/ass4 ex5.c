#include <stdio.h>
#include <stdlib.h>

int main(void) {

int ele[100] ,n_ele ,i ,s_ele;


printf("Enter no of elements :");
scanf("%d" , &n_ele);

for(i=0 ; n_ele > i ;i++ )
{
	scanf("%d" , &ele[i]);

}


for(i=0 ; n_ele > i ;i++ )
{

	printf("%d  " , ele[i]);

}

printf(" \n Enter the elements to be searched : ");
scanf("%d" , &s_ele);

for (i=0;n_ele > i ; i++ )
{
    if(s_ele==ele[i])
    {

        printf("number found at the location = %d " , i+1);
        return 0;
    }

}

    printf(" not found." );
   return 0;

}
