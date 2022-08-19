#include <stdio.h>

int cube(int n);

int main(void){

	int num;
	
	printf("Enter any number: ");
	scanf("%d",&num);
	
	printf("%d",cube(num));
	return 0;
}

int cube(int n){
	return n*n*n;
}