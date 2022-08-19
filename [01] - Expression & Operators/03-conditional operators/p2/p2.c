#include <stdio.h>

int main(void){

	int n1,n2;

	printf("Enter any number to check even or odd: ");
	scanf("%d",&n1);
	
	n2=(n1&1==1)?1:0;
	
	if(n2==1)	printf("The number is ODD");
	else		printf("The number is EVEN");
	
	return 0;
}