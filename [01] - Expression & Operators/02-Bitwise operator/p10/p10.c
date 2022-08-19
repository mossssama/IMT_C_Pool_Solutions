#include <stdio.h>

int main(void){
	
	int oldNum,newNum,bitsNum,count=0;
	
	printf("Enter any number: ");
	scanf("%d",&oldNum);

	printf("Original number: %d (in decimal)\n",oldNum);

	newNum=oldNum^1;
	
	printf("Number after bits are flipped = %d (in decimal)",newNum);
	
	return 0;
}