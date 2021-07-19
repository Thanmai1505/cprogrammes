//divisible by 3,8 or both 3and8 ornot divisble by both
#include<stdio.h>
int main()
{
	int a;
	printf("\n Enter a number:");
	scanf("%d",&a);
	if(a%3==0&&a%8==0)
	printf("\n num divisible by 3 and 8");
	else if(a%8==0)
	printf("num divisible by 8");
	else if(a%3==0)
	printf("num is divisible by 3");
	else
	printf("not divisible by both");
}
