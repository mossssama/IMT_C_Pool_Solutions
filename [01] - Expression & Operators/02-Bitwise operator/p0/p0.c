#include <stdio.h>

int main(void){
	
	int n;
	
	printf("Enter any number: ");
	scanf("%d",&n);

	if((n & 1)==0) printf("LSB of %d is unset (0).",n);
	else 		   printf("LSB of %d is set (1).",n);
	return 0;
}