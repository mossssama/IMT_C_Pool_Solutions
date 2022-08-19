#include <stdio.h>

typedef struct{
	int realNum;
	int imaginoryNum;
}complex;

complex addComplexNum(complex num1,complex num2);

int main(void){
	complex complexNum[2];
	
	for(int i=0;i<2;i++){
		printf("For %dst complex number\n",i+1);
		printf("Enter real and imaginary part respectively:\n");
		scanf("%d %d",&complexNum[i].realNum,&complexNum[i].imaginoryNum);
	}
	
	complex sum=addComplexNum(complexNum[0],complexNum[1]);
	
	printf("Sum of two numbers = %d+%di",sum.realNum,sum.imaginoryNum);

	return 0;
}

complex addComplexNum(complex num1,complex num2){
	complex sum={num1.realNum+num2.realNum,num1.imaginoryNum+ num2.imaginoryNum};
	return sum;
}