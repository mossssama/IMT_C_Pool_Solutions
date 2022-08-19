#include <stdio.h>

int main(void){

	int cost,sell;

	printf("Enter cost price: ");
	scanf("%d",&cost);
	
	printf("Enter selling price: ");
	scanf("%d",&sell);

	printf("Profit = %d",sell-cost);

	return 0;
}