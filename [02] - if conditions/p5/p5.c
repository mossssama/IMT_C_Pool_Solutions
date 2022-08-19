#include <stdio.h>

int main(void){
	
	int year;
	
	printf("Enter year : ");
	scanf("%d",&year);

	if (year%4==0 && year%100!=0) printf("LEAP YEAR");
	else if (year%400==0) printf("LEAP YEAR");
	else printf("NOT LEAP YEAR");

return 0;
}