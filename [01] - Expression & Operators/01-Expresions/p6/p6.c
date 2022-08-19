#include <stdio.h>

int main(void){	
	int n1,n2;
	
	printf("Enter length of the rectangle: ");
	scanf("%d",&n1);
	
	printf("Enter width of the rectangle: ");
	scanf("%d",&n2);
	
	printf("Perimeter of rectangle = %f",2.0*(n1+n2));
	
	return 0;
}