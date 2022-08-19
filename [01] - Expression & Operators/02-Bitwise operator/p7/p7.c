#include <stdio.h>
#include <math.h>

int main(void){
	
	int num,bitsNum,status,tempNum,i;
	
	printf("Enter any number: ");
	scanf("%d",&num);

	tempNum=num;
	bitsNum=(int)log2(num)+1;

	for(i=0;i<=bitsNum;i++){
		if ((tempNum>>i & 1) ==1) { status=i; break; }
	}
	
	printf("Lowest order set bit in %d is %d",num,status);
	
	return 0;
}