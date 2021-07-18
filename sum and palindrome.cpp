#include<stdio.h>
int main()
{
	int rem,num,sum=0;
	printf("\n enter a num:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		num =num/10;
		sum = sum+rem;
	}
	printf("num is %d",sum);
	
}
