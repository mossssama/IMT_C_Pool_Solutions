#include <stdio.h>
/* main function*/
int main()
{
    int i, j, size;   //********define integer variables************

    printf("Enter size: "); //***********print this sentence to user*******
    scanf("%d", &size);     //********to take value from user And Put it in variable Size **********

    for(i=1; i<size*2; i++)
    {
        for(j=1; j<=size; j++)
        {
            // Condition for corner and center intersection space
            if((i==1 && (j==1 || j==size)) || 
               (i==size && (j==1 || j==size)) || 
               (i==size*2-1 && (j==1 || j==size)))
            {
                printf(" ");
            }
            else if(i==1 || i==size || i==(size*2)-1 || j==1 || j==size)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}