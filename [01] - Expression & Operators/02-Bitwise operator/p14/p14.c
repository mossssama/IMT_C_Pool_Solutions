#include <stdio.h>

int main(void){
	
	int n;
	
	printf("Enter any number: ");
	scanf("%d",&n);

	if ((n&1)==1) printf("%d is odd",n);
	else 		   printf("%d is even",n);
	
	return 0;
}