#include <stdio.h>

int main(void){
	
	int num,bitsNum=31,countZero=0,countOne=0;
	
	printf("Enter any number: ");
	scanf("%d",&num);

	while(bitsNum>=0){
		if ((num>>bitsNum & 1) ==0)  countZero++;
		else 						     countOne++;
		bitsNum--;
	}
	
	printf("Total zero bit is %d\n",countZero);
	printf("Total one bit is %d",countOne);
	
	return 0;
}