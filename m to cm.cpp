#include<stdio.h>
#include<stdlib.h>
int main()
{
	float cm,m,km;
	printf("\n enter the length in cm");
	scanf("%f",&cm);
	m = cm/100;
	km = cm/100000;
	printf("\n%f \n%f ",m,km);
	return 0;
}
