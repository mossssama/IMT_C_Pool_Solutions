#include <stdio.h>

int main(void){
	
	int num,count=0;
	
	printf("Enter amount: ");
	scanf("%d",&num);
	
	printf("Total number of notes = ");
	
	while(num>=500){num-=500;  count++;}
	printf("\n500 = %d",count);
	
	count=0;
	while(num>=100){num-=100;  count++;}
	printf("\n100 = %d",count);
	
	count=0;
	while(num>=50){num-=50;  count++;}
	printf("\n50 = %d",count);
		
	count=0;
	while(num>=20){num-=20;  count++;}
	printf("\n20 = %d",count);	

	count=0;
	while(num>=10){num-=10;  count++;}
	printf("\n10 = %d",count);

	count=0;
	while(num>=5){num-=5;  count++;}
	printf("\n5 = %d",count);

	count=0;
	while(num>=2){num-=2;  count++;}
	printf("\n2 = %d",count);

	count=0;
	while(num>=1){num-=1;  count++;}
	printf("\n1 = %d",count);

	return 0;
}