#include <stdio.h>

int main(void){

	int year,isLeap;

	printf("Entey any year: ");
	scanf("%d",&year);
	
	isLeap=(year%4!=0)?(0):((year%100!=0)?(1):((year%400!=0)?(0):(1)));

	if (isLeap==0)  printf("COMMON YEAR");
	else 			printf("LEAP YEAR");
	
	
	return 0;
}