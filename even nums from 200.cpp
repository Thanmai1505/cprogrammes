#include<stdio.h>
int main()
{
	int n,num;
	printf("\n Enter a limit:");
	scanf("%d",&n);
	for(num=200;num<=n;num++)
	{ 
	   if(num%2==0)
	   printf("%6d",num);
	}
	
}
