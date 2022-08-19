#include <stdio.h>
#include <math.h>

int main(void){
	
	int n,bits,toShift=1;
	
	printf("Enter any number: ");
	scanf("%d",&n);

	bits=(int)log2(n)+1;
	
	while(bits>1){
		toShift<<1;
		bits--;
	}
	
	if((n & toShift)==1) printf("MSB of %d is set (1).",n);
	else 			     printf("MSB of %d is unset (0).",n);
}