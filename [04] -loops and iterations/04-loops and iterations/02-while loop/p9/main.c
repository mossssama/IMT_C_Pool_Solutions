#include<stdio.h>
void main(void)
{
	int num,temp,reminder,reverse_num=0;  //******* To Define Variable********
	printf("enter the number:");
	scanf("%d",&num);   //****** To Take Number Of Num *********
	temp=num;
	while (  temp!=0 )   //****** to Make Loop if Temp Not Equal 0 Will Exquet The Loop ***********
   { 
    reminder=temp%10;  //*****To Make Reminder By 10
	reverse_num=reverse_num*10+reminder; 
	temp=temp/10;    //*****To Make Division********
   }
   if(reverse_num==num)
  printf("this is number is palindrome ");
else
	printf("this is number is not palindrome ");
	
}    
	