#include <stdio.h>
/*main function*/
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm; //define integer variables 

    printf("Enter the number of terms: "); /*to display this sentence to user*/
    scanf("%d", &n);     //**********to take from user the value of terms and put it in variable n**********

    printf("Fibonacci Series: "); /*to display the Result*/
/* for loop*/
    for (i = 1; i <= n; ++i) 
    {
        printf("%d, ", t1);   //print the value of t1
        nextTerm = t1 + t2;   // to put the result in variable next time
        t1 = t2;              // to equal t1 with t2
        t2 = nextTerm;        //to equal t2 with nextterm
    }
    return 0;
}