#include <stdio.h>

int main(void){

	int num,nthBit,tempNum;

	printf("Enter any number: ");
	scanf("%d",&num);
	
	printf("Enter nth bit to check (0-31): ");
	scanf("%d",&nthBit);

	tempNum=num>>nthBit;
	
	if( (tempNum & 1)==1 )       printf("The %d bit is set to 1.",nthBit);
	else 			             printf("The %d bit is set to 0.",nthBit);
	
}