#include <stdio.h>
 
void  main()
{
float sum ;
int n ,i;
sum = 0 ;
printf ("enter value of n:");
scanf("%d",&n);
for( i = 1 ; i <= n ; i++ )
{
sum = sum + 1/(float)i ;
printf("%2d %6.4f\n", i, sum) ;
}
}