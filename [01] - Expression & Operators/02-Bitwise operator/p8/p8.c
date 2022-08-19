#include <stdio.h>
#include <math.h>

int main(void){
	
	int num,bitsNum,count=0;
	
	printf("Enter any number: ");
	scanf("%d",&num);

	bitsNum=(int)log2(num)+1;

	while(bitsNum>0){
		if ((1<<count & num) ==0)   count++;
		else 						break;
	}
	
	printf("Trailing zeros in %d is %d",num,count);
	
	return 0;
}