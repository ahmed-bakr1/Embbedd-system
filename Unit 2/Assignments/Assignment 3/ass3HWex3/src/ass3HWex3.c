#include <stdio.h>
#include <stdlib.h>

int main(void) {
char s [100], r[100] ;
int i,j=0;


printf("Enter the String  :");
gets(s);
j=strlen(s)-1;

for(i=0; strlen(s)>i ; i++)
{

	r[j]=s[i];
	j--;

}
printf("%s" ,r);
//printf("%d" ,strlen(s));




}
