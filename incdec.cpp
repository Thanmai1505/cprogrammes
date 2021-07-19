#include<stdio.h>
int main()
{
	int a = 20;
	int b = 30;
	a=b++ + ++a;
	printf("\n a=%d \nb=%d",a,b);
	return 1;
}
