#include <stdio.h>

int calcDiameter(int n);
float calcCircumference(int n);
float calcArea(int n);


int main(void){

	int radius;

	printf("Enter radius of circle: ");
	scanf("%d",&radius);

	printf("Diameter of circle: %.2f",(float)calcDiameter(radius));
	printf("\nCircumference of circle: %.2f",calcCircumference(radius));
	printf("\nArea of circle: %.2f",calcArea(radius));

	return 0;
}

int calcDiameter(int r)		  {return 2*r;}

float calcCircumference(int r){return 2*3.14*r;}

float calcArea(int r)	  {return 3.14*3.14*r;}

