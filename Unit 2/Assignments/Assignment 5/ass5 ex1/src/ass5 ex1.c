/*
 ============================================================================
 Name        : ass5.c
 Author      : re
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


struct student{
	char name[50];
	int roll;
	float marks;



};

int main(void) {

struct student P ;
printf("Enter information of students: \n ");

printf("Enter Name : ");
scanf("%s" ,&P.name);
printf("Enter roll number : ");
scanf("%d" ,&P.roll);
printf("Enter marks : ");
scanf("%f" ,&P.marks);

printf("Name : %s \n " ,P.name);
printf("Roll :%d \n " ,P.roll);
printf("Marks : %f " ,P.marks);


}
