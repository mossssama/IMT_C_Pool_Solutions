#include <stdio.h>
#include <math.h>

int main(void){
	
	int num,bitsNum,status,tempNum;
	
	printf("Enter any number: ");
	scanf("%d",&num);

	tempNum=num;
	bitsNum=(int)log2(num)+1;

	while(bitsNum>0){
		if ((tempNum>>bitsNum & 1) ==1) { status=bitsNum; break; }
		else bitsNum--;
	}
	
	printf("Highest order set bit in %d is %d",num,status);
	
	return 0;
}