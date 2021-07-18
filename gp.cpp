#include<stdio.h>
#include<math.h>
int main()
{
	int x,n,i,sum=0;
	printf("\n Enter n and x:");
	scanf("%d%d",&n,&x);
	for(i=0;i<=n;i++)
	{
		sum = sum+pow(x,i);
	}
	printf("sum=%d",sum);
	
}
