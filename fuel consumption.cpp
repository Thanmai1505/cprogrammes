#include<stdio.h>
int main()
{
	int a;
	float b,avgconsumption;
	printf("\n input distance in km:");
	scanf("%d",&a);
	printf("\n input total fuel consumed");
	scanf("%f",&b);
	avgconsumption = a/b;
	printf("\n %f",avgconsumption);
	
}
