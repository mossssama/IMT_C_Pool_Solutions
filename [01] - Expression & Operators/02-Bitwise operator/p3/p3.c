#include <stdio.h>

int main(void){
	
	int oldNum,newNum,nthBit,tempBit,shift=1;
	
	printf("Enter any number: ");
	scanf("%d",&oldNum);

	printf("Enter nth bit to set (0-31): ");
	scanf("%d",&nthBit);

	tempBit=nthBit;
	
	while(tempBit>0){
		shift=shift<<1;
		tempBit--;
	}
	
	newNum=oldNum|shift;
	
	printf("Bit set successfully.\n");
	
	printf("Number before setting %d bit: %d (in decimal)\n",nthBit,oldNum);
	printf("Number after setting %d bit: %d (in decimal)\n",nthBit,newNum);
	
	return 0;
}