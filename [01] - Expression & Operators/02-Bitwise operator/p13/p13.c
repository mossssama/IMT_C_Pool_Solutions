#include <stdio.h>

int main(void){
	
	int n1,n2;
	
	printf("Enter any two numbers: ");
	scanf("%d %d",&n1,&n2);

	printf("Original value of num1 = %d\n",n1);
	printf("Original value of num2 = %d\n",n2);
	
	n1=n1^n2;
	n2=n1^n2;
	n1=n1^n2;
	
	printf("Num1 after swapping = %d\n",n1);
	printf("Num2 after swapping = %d\n",n2);
	
	return 0;
}