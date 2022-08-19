#include <stdio.h>

int main(void){
	
	int n1,n2,n3,n4;
	
	printf("Enter integer value one\n");
	scanf("%d",&n1);
	
	printf("Enter integer value two\n");
	scanf("%d",&n2);

	printf("Enter integer value three\n");
	scanf("%d",&n3);

	printf("Enter integer value four\n");
	scanf("%d",&n4);	
	
	printf("Ratio = %f",(n1+n2)/(float)(n3-n4));
	
	return 0;
}