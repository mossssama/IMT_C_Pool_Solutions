#include <stdio.h>
  void main()
  {
	  int row=1,column=0,result=0;
	  int i,j=0;
	  printf("MULTIPLACATION TABLE");
	   printf("\n------------------------\n");
	   do{
		  for(i=1;i<=10;i++)
		  {
			column=i*row;
			printf("%3d",column); 
			    printf(" ");
		  }
		  printf("\n");
		  row++;
	   }
		  while(row<13);
  }