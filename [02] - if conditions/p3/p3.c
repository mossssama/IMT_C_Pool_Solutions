#include<stdio.h>

int main(void){
	
	int n1,n2,n3;
	
	printf("enter the degree of course one:");
	scanf("%d",&n1);
	
	printf("\nenter the degree of course two:");
	scanf("%d",&n2);
	
	printf("\nenter the degree of course three:");
	scanf("%d",&n3);
	
	if ( (n1>=65 && n2>=55 && n3>=50) || ((n1+n2+n3)>=140) ) printf("\nthe candidate is eligible for admission\n");
	else 											 	     printf("\nthe candidate isn't eligbile for admission\n");
	
	return 0;
}