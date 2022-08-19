#include <stdio.h>

int main(void){

	int isChar;
	char ch;

	printf("Enter any character: ");
	scanf("%c",&ch);
	
	isChar=( (ch>=65 && ch<=90)||(ch>=97 && ch<=122) )?(1):(0);

	if (isChar==1) printf("It is ALPHABET");
	else		   printf("It is NOT ALPHABET");
	
	return 0;
}

