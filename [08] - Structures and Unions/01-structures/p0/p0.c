#include <stdio.h>

typedef struct{
	int feet;
	int inch;
}Distance;

int main(void){
	Distance dist[2];
	
	for (int i=0;i<2;i++){
		printf("Enter information for %dst distance",i+1);
		
		printf("\nEnter feet: ");
		scanf("%d",&dist[i].feet);
		
		printf("\nEnter inch: ");
		scanf("%d",&dist[i].inch);		
	}
	
	printf("Sum of distances = %d'-%d''",dist[0].feet+dist[1].feet,dist[0].inch+dist[1].inch);

	return 0;
}