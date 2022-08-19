#include <stdio.h>

int main(void){

	int n1,n2,n3;

	printf("Enter two numbers: ");
	scanf("%d %d",&n1,&n2);
	
	n3=(n1>n2)?n1:n2;
	
	printf("Maximum between %d and %d is %d",n1,n2,n3);
	
	
	return 0;
}