#include <stdio.h>
int main(void){
	
	int arr1[9],arr2[9],i;
	int *ptr1=arr1,*ptr2=arr2;
	
	printf("Enter first matrix contents: \n");
	//for(i=0;i<9;i++)	scanf("%d",&ptr1[i]);		
	for(i=0;i<9;i++)	scanf("%d",ptr1+i);

	
	printf("\nEnter second matrix contents: \n");
	for(i=0;i<9;i++)	scanf("%d",&ptr2[i]);

	printf("Sum of first and second matrix\n");
	for(i=0;i<9;i++){
		printf("%d ",ptr1[i]+ptr2[i]);
		if((i+1)%3==0) printf("\n");
		}
	
return 0;
}



//scanf takes address


