// Program to add numbers until user enters zero

#include <stdio.h>
int main()
{
    double number, sum = 0;

    // body of loop is executed at least once
    do
    {
        printf("Enter a number: ");
        scanf("%lf", &number);
        sum += number;
    }
    while(number != 0.0);

    printf("Sum = %.2lf",sum);

    return 0;
}