#include <stdio.h>
//printing strings


int main(void){
	
	char name[14]="Mohamed Osama",bMonth[4]="Dec";
	int bDay=13,bYear=1999;
	int mobile=1007025929;
	
	printf("Name : %s\n",name);
	printf("DOB : %s, %d, %d\n",bMonth,bDay,bYear);
	printf("Mobile : 0%d",mobile);
	
	
	return 0;
}