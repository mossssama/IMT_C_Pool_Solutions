#include<stdio.h>
void main(void)
{
	int num,i=2;    // Define Num , i=2
	printf("enter the number:");
	scanf("%d",&num);   //To Take Value Of Num
	while ( i <= num )    //To Check i<= 
   { 
     if ( num == i )  //To Check num 
	 {
		 printf("this is number is prime"); 
		 break;
	 }
      
      else if ( num%i == 0 )   // To Check of Reminder 
	  {		  
	  printf("this is number is not prime") ;
	   break;  
	  }
      i++;      // To Increment i 1 Step 
   }
   
}    
	