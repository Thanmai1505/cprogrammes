#include<stdio.h>
int main()
{
	int n,i,prime;
	printf("\n Enter a num:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
	   {
			printf("it is not a prime");
	   }
    }
     	printf("it is prime");
	
}

