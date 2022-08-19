#include <stdio.h>
int main()
{
    long int number;
    int count = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    while(number != 0)
    {
        // number = number/10
        number /= 10;
        count++;
    }

    printf("Number of digits: %d", count);
}