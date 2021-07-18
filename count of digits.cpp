#include<stdio.h>
int main()
{
	int n,count=0;
	printf("\n enter a num:");
	scanf("%d",&n);
	while(n!=0)
	{
		n = n/10;
		count=count+1;
	}
		printf("\n sum of digits is %d",count);

}
