#include<stdio.h>
int main()
{
	int i,n,max;
	max=0;
	int a[5];
	printf("\n Enter 5 numbers:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
	 printf("enter 5 nums");
	 scanf("%d",&a[i]);
    } 
	for (i=0;i<5;i++)
	{
		if(a[i]>max)
		max = a[i];
	}
     printf("\n max of array elements is %d",max);
}
