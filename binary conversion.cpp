#include<stdio.h>
int main()
{
	int i=1 ,rem,num,binary=0;
	printf("enter a num");
	scanf("%d",&num);	
    while(num!=0)
	{
	rem=num%2;
	num=num/2;
	binary = binary+i*rem;
	i=i*10;
    } 
    printf("\n %d",binary);
}
