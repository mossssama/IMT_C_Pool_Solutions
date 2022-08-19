#include <stdio.h>

int main(void){

	int n1,n2,n3,n4;

	printf("Enter three numbers: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	n4=(n1>n2 && n1>n3)?n1:((n2>n3)?n2:n3);
	
	printf("Maximum between %d,%d and %d is %d",n1,n2,n3,n4);
	
	
	return 0;
}