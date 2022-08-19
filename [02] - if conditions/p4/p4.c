#include<stdio.h>

int main(void){
	
	int n1,n2,n3,n4,n5;
	
	printf("enter the five numbers:\n");
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
	
	printf("the numbers that is divisible by 3 is :");
		if(n1%3==0) printf("\n%d",n1);	
		if(n2%3==0) printf("\n%d",n2);
		if(n3%3==0) printf("\n%d",n3);
		if(n4%3==0) printf("\n%d",n4);
		if(n5%3==0) printf("\n%d",n5);


		
	return 0;
}