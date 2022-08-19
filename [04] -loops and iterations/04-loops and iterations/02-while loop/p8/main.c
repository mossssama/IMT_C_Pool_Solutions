#include<stdio.h>
void main(void)
{
	int num,reverse_num=0,reminder;  // define variable 
	printf("enter the number:");
	scanf("%d",&num); // To Take number from user 
	while (  num!=0 )   // to make loop if number not Equal 0
   { 
    reminder=num%10;   //to make Reminder 
	reverse_num=reverse_num*10+reminder; 
	num=num/10;    // to make Division 
   } 
   printf(" the reverse number=%d",reverse_num);
}    
	