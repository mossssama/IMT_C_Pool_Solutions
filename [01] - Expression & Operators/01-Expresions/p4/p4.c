#include <stdio.h>

int main(void){
	
	int n1,n2;
	
	printf("Enter first number: ");
	scanf("%d",&n1);
	
	printf("Enter second number: ");
	scanf("%d",&n2);					// assume n1=10   n2=6
	
	n1=n1-n2;							//		  n1=4    n2=6
	n2=n2+n1;							//		  n1=4	  n2=10
	n1=n2-n1;							//		  n1=6    n2=10
	
	printf("\n ......After swapping......\n");
	
	printf("firstNumber = %d\n",n1);
	printf("secondNumber = %d",n2);
	
	
	/*
	num1=7;
	num2=5;
	
	
	num1=num1-num2       num1=2;      num2=5
	num2=num2+num1		 num1=2;      num2=7
	num1=num2-num1		 num1=5;	   num2=7
	
	*/
	
	return 0;
}