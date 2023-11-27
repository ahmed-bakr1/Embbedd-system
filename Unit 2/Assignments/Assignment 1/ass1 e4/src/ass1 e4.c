/*
 ============================================================================
 EX4:

Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1 , num2 , sum ;
    printf("Enter two numbers : ");
    scanf("%f %f" , &num1 , &num2);
    sum = num1  * num2 ;
    printf("Product: %f" , sum);
    return 0;

}
