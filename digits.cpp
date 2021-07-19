#include<stdio.h>
int main()
{
	int num,rem;
	scanf("%d",&num);
	while(num>=1)
	{
		rem=num%10;
		num=num/10;
		printf("\n%d",rem);
	}
	
}
