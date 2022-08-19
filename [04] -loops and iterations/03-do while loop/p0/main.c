#include <stdio.h>
int main()
{
    int number;  //**** To Define Number Ass integer ********
    char check='a';
  do{    // To Make Loop With do 
	printf("Enter a number: ");
    scanf("%d", &number);    //******* To take Number From user ********
    if (number <= 0)  // to Chck About number if Number Smaller Than Zero  
    {
        if (number == 0)  //*********** To check If user Entered Zero ***********
            printf("You entered 0");
        else
            printf("You entered a negative number.");  //**********If Not Zero Will it Negative *********
    }
    else
	{
      printf("You entered a positive number."); 
	}
  	printf("\n if you continue press (c) \n exit press(e) \n"); // To Control In Exit This Problem 
    scanf("%s", &check);   //To Take The Dicision From user 
  }
  while(check=='c');
    return 0;
}