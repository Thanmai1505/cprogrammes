#include<stdio.h>
int main()
{
	int sum=0,num,rem;
	printf("\n enter a num:");
	scanf("%d",&num);
	while(num>0)
	{
		rem = num%10;
		sum = sum+rem;
   		num = num/10;
	}	
		printf("\n sum of digits is %d",sum);

}
