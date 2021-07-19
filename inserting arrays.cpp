#include<stdio.h>
int main()
{
	int A[10],position,i,n,newvalue;
	printf("\n Enter the num of elements in array");
	scanf("%d",&A[i]);
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	printf("\n Enter the position where you want to insert:");
	scanf("%d",&position);
	for(i=position;i<n;i++)
	A[i+1]=A[i];
	A[position]=90;
	

	
}
