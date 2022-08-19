#include <stdio.h>
int main()
{
    int number, power; // define Variable As integer 

    long int result = 1;   //define result Equal 1

    printf("Enter the number: ");
    scanf("%d", &number);  //*****To take Number From User 

    printf("Enter a power: ");
    scanf("%d", &power);  //*****To take Value From User 

    while (power != 0) //******To make Loop With While **********
    {
        result *= number;  // to make Pointer To Number 
        power--;
    }

    printf("Answer = %d", result);

    return 0;
}