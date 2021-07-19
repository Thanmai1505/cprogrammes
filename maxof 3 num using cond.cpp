#include<stdio.h>
//biggest of 3 numbers
int main()
{
	int a,b,c,max1,max2;
	printf("\n Enter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	max1=(a>b)?a:b;
	max2=(b>c)?b:c;
	max1=(max1>max2)?max1:max2;
	printf("\n %d is maximum",max1);
}
