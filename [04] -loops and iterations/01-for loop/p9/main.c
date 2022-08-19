#include <stdio.h>
 
void main ()
{
	int number,sum=0;
	int i;
	printf("enter any number=");
	scanf("%d",&number);
	printf("1+");
	for(i=2;i<=number-1;i++)
		printf("1/%d+",i);
	for(i=1;i<=number;i++)
		sum+=i	;
	printf("1/%d",number);
	printf("\nsum=1/%d",sum);
	
	
}