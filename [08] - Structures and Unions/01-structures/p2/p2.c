#include <stdio.h>

time timeDifference(time stTime,time eTime);

typedef struct{
	int hour;
	int minute;
	int second;
}time;

int main(void){

	time startTime,endTime;

	printf("Enter start time:\n");
	printf("Enter hours, minutes and seconds respectively: \n");
	scanf("%d %d %d",&startTime.hour,&startTime.minute,&startTime.second);

	printf("Enter stop time:\n");
	printf("Enter hours, minutes and seconds respectively: \n");
	scanf("%d %d %d",&endTime.hour,&endTime.minute,&endTime.second);

	timeDifference(startTime,endTime);
	
	printf("Difference is %d:%d:%d",timeDifference(startTime,endTime).hour,timeDifference(startTime,endTime).minute,timeDifference(startTime,endTime).second);
	
	return 0;
}

time timeDifference(time stTime,time eTime){
	time tDifference={eTime.hour-stTime.hour,eTime.minute-stTime.minute,eTime.second-stTime.second};
	return tDifference;
}

//www.codeForWin.com // good