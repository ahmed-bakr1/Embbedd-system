#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int ele [100] ;
	int n_ele , i_ele , l_ele , i ;
    printf("\n Enter no of elements :") ;
    scanf("%d" , &n_ele);
    for (i=0; i<n_ele ; i++ )

    {
    	scanf("%d" , &ele[i]);

    }
    printf("\n Enter nthe element to be inserted : :") ;
    scanf("%d" , &i_ele);
     printf("\n Enter the Location :") ;
    scanf("%d" , &l_ele);
   for(i=n_ele; i >=l_ele ; i--)
   {
       ele[i]= ele[i-1];

   }
   ele[l_ele -1 ] = i_ele ;
   n_ele++;

   for(i=0;i<n_ele;i++)
   {
       printf("%d" , ele[i]);
   }



}
