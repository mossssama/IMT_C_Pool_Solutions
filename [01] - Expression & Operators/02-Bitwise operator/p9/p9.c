#include <stdio.h>

int main(void){
	
	int num,tempNum,bitsNum=31,count=0;
	
	printf("Enter any number: ");
	scanf("%d",&num);

	tempNum=num;

	while(bitsNum>0){
		if ((tempNum>>bitsNum & 1) ==0) {  count++;  bitsNum--;  }
		else 						        break;
	}
	
	printf("Leading zeros in %d is %d",num,count);
	
	return 0;
}