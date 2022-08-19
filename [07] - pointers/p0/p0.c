#include <stdio.h>

int main(void){
	
	int arr[50];
	int tempArr[50]={};

	int* ptr=tempArr;
	int i,j,repeat=0,index=1,arrSize;
	
	printf("Enter size of the array: ");
	scanf("%d",&arrSize);

	printf("Enter %d elements of an array: ",arrSize);
	for(i=0;i<arrSize;i++)	scanf("%d",&arr[i]);
	
	ptr[0]=arr[0];
	
	for(i=1;i<arrSize;i++){
		for(j=0;j<arrSize;j++)	if(arr[i]==ptr[j]){repeat=1; break;}
		
		if(!repeat) {ptr[index]=arr[i];  index++;}
	}
	
	//arr=ptr;
	//ptr=NULL;
	
	printf("The array after removing duplicates is: ");
	for(i=0;i<index;i++)	printf("%d ",tempArr[i]);

	return 0;
}


