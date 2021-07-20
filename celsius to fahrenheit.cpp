#include<stdio.h>
int main()
{
	float f,c;
	printf("\n temp in fahrenheit");
	scanf("%f",&f);
	c = ((f-32)*5)/9;
	printf("\n %d",c);
	return 0;
}
