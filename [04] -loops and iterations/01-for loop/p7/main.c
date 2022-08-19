#include <stdio.h>
int main()
{
    int number, i;  //****to Define Variables As integer*******

    printf("Enter the number: ");
    scanf("%d",&number);  //*******To take Number From User 
 printf("Factors of %d are: ", number);
    for(i=1; i <= number; ++i)
    {
        if (number%i == 0) //***** to Check Reminder of i 
        {
            printf("%d ",i);
        }
    }

    return 0;
}