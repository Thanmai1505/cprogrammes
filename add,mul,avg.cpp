#include<stdio.h>
int main()
{
    int a,b,c,add,multiply,avg;
	printf("\n Enter 3 integers");
	scanf("\n%d\n%d\n%d",&a,&b,&c);
	add = a+b+c;
	multiply = a*b*c;
	avg = (a+b+c)/3;
	printf("\n %d,%d,%d",add,multiply,avg);
	return 0;	
}
