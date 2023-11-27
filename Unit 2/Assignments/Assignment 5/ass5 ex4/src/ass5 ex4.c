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

struct Student {

	char name[100];
	int roll;
	float marks;

};

int main(void) {

	struct Student All[10];
    printf("Enter information of student: \n ");
	for(int i=1;i<11;i++)
	{
	    All[i].roll=i;
		printf("For roll number %d \n" ,All[i].roll);
		printf("Enter name :" );
		scanf("%s" ,&All[i].name);
		printf("Enter marks : " );
		scanf("%f",&All[i].marks);

	}
	printf("\n Displaying information of students: \n");
	for(int i=1;i<11;i++)
	{
	    All[i].roll=i;
		printf("For roll number %d \n" ,All[i].roll);
		printf("Enter name : %s" ,All[i].name );
	//	scanf("%s" ,&All[i].name);
		printf("Enter marks: %f \n" , All[i].marks );
	//	scanf("%f",&All[i].marks);

	}


}
