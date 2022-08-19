#include <stdio.h>
//taking multiple inputs in the same scanf

int main(void){
	
	int n1,n2,n3,n4,n5;
	
	printf("Enter marks of five subjects:\n");
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
	
	
	printf("Total marks = %.2f\n",((float)n1)+n2+n3+n4+n5);
	printf("Average marks = %.2f\n",(n1+n2+n3+n4+n5)/5.0);
	printf("Percentage = %.2f\n",(n1+n2+n3+n4+n5)/5.0);
	
	
	return 0;
}