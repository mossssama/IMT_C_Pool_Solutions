#include<stdio.h>
#include<math.h>

int main(void){
	
	int a,b,c;
	
	printf("Enter the value a:");
	scanf("%d",&a);
	
	printf("Enter the value b:");
	scanf("%d",&b);
	
	printf("Enter the value c:");
	scanf("%d",&c);
	
	if (a==0 && b==0) 			 printf("no solution");
	else if (a==0) 	 			 printf("one root=%d",-c/b);
	else if ((pow(b,2)-4*a*b)<0) printf("no roots");
	else {
		printf("1st root= %f\n",(-b+pow(pow(b,2)-4*a*c,0.5))/2*a);
		printf("2nd root= %f\n",(-b-pow(pow(b,2)-4*a*c,0.5))/2*a);
	}
	
	return 0;
}