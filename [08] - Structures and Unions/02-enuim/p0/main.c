#include <stdio.h>
 
void main ()
{
	enum month{jan=1,feb,mar,apr,may,june,july,aug,seb,oct,nov,dec};
	enum month m ;
	m=jan;
	printf("jan=%d",m);
	printf("\nfeb=%d",m+1);
	printf("\njune=%d",m+5);
	printf("\ndec=%d",m+11);
}