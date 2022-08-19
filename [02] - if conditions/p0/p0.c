#include<stdio.h>

int main(void){

	char ch;

	printf("Enter an alphabet: ");
	scanf("%c",&ch);
	
	if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') printf("%c is a vowel",ch);
	else 													 printf("%c isn't a vowel",ch);
	
	return 0;
}