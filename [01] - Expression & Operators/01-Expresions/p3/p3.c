#include <stdio.h>

int main(void){
	
	int n1,n2,temp;
	
	printf("Enter first number: ");
	scanf("%d",&n1);
	
	printf("Enter second number: ");
	scanf("%d",&n2);

	temp=n1;				// swapping operation
	n1=n2;
	n2=temp;
	
	printf("\n ......After swapping......\n");
	
	printf("firstNumber = %d\n",n1);
	printf("secondNumber = %d",n2);
	
	return 0;
}