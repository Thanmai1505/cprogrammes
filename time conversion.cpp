#include<stdio.h>
int main()
{
	float sec,HOURS,MINS;
	printf("\n enter seconds");
	scanf("%f",&sec);
	MINS = sec/60;
	HOURS = sec/3600;
	sec = sec;
	printf("\n%f \n%f \n%f",MINS,HOURS,sec);
	return 0;
}
