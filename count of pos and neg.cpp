#include<stdio.h>
int main()
{
	int a,b,c,d,e,count,count1;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	count = 0;
	if(a>0){count+=1;}
	if(b>0){count+=1;}
	if(c>0){count+=1;}
	if(d>0){count+=1;}
	if(e>0){count+=1;}
	printf("\n num of positive integers is %d",count);
	count1=5-count;
	printf("\n num of negative integers is %d",count1);
	return 1;
	
}
