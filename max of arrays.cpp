#include<stdio.h>
int main()
{

	int a[3]={1,7,9},i,max;
	max=a[0];
	for (i=0;i<3;i++)
	{
	    if(a[i]>max)
	    max=a[i];
    }
    printf("\n max of array elements is %d",max);
	
				
}
