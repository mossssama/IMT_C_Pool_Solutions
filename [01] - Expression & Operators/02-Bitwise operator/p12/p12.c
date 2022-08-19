#include <stdio.h>

int main(void){
	
	int num,rotation,i,numR,numL,msb,lsb;
	
	printf("Enter a number: ");
	scanf("%d",&num);

	printf("Enter number of rotation: ");
	scanf("%d",&rotation);
	
	numR=numL=num;
	
	for (i=0;i<rotation;i++){  
		lsb=(numR&1);				//save lsb for right shift
		msb=(numL>>31);				//save msb for left shift
		
		numR=numR>>1;				//Shift Right
		if(lsb!=0) numR|=(1<<31);	
		  		
		numL=numL<<1;				//Shift Left
		if(msb!=0) numL|=msb; 
	}
	
	printf("%d left rotated %d times = %d\n",num,rotation,numL);
	printf("%d right rotated %d times = %d\n",num,rotation,numR);
	
	return 0;
}