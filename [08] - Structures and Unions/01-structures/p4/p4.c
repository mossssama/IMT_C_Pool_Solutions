#include <stdio.h>
#include "C:\Users\Mohamed Osama\Desktop\C_Libraries\STD_types.h"

int power(int,int);
int binaryToDecimal(int);

int i;

int main(void){

	int binaryNumber;

	printf("Enter a binary number: ");
	scanf("%d",&binaryNumber);
	
	int decimalNumber=binaryToDecimal(binaryNumber);

	printf("%d in binary = %d in decimal",binaryNumber,decimalNumber);
		
	return 0;
}

int power(int number,int exponent){
	
	int result=1;
	
	if(exponent==0) 	return 1;
	
	else {
		for(i=0;i<exponent;i++)		result*=number;
		return result;
	}
	
}

int binaryToDecimal(int binaryNum){						//binaryNumber=1111
	int decimalNumber=0;								//decimalNumber=0
	i=0;
	
	while(binaryNum>0){
	
		if(binaryNum%10==1)	decimalNumber+=power(2,i);		
		
		binaryNum/=10;   i++;
	
	}
	return decimalNumber;
	
}

