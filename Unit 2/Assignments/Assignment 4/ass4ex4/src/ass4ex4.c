#include <stdio.h>
#include <stdlib.h>

int pr(int n , int power);

int pr(int n , int power){

	if(power!=0)
	{
		return (n*pr(n,power-1));

	}

else
return 1;
}


int main(void) {

int power ,n;
printf("Enter base number :  ");
scanf ("%d" ,&n);
printf("Enter power number (positive integer)  ");
scanf ("%d" , &power);
printf("%d %d %d" , n , power , pr(n,power));

return 0;

}
