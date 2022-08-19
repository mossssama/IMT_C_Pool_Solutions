#include <stdio.h>

int main(void){
	
	int num,bit,bin[32];
	
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(bit=0;bit<32;bit++){
		bin[bit]=num%2;
		num=num/2;
	}
	
	printf("Converted binary: ");
	for(bit=31;bit>=0;bit--)  printf("%d",bin[bit]);
	
	return 0;
}