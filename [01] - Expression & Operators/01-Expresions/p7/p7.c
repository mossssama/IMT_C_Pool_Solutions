#include <stdio.h>
#include <math.h>

int main(void){
	
	int b,e,r;
	
	printf("Enter base: ");
	scanf("%d",&b);
	
	printf("Enter exponent: ");
	scanf("%d",&e);
	
	r=pow(b,e);
	
	printf("%d ^ %d = %d",b,e,r);
	
	
	return 0;
}