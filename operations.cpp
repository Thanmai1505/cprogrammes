#include<stdio.h>
int main() 
{
	int a,b,c;
	char ch;
	//printf("\n Enter operands '+','-','*','/','%':");
	//scanf("%c",&ch);
	printf("\n enter a and b");
	scanf("%d%d",&a,&b);
	printf("\n Enter operands '+','-','*','/','%':");
	scanf("%c",&ch);
    switch(ch)
	{
		case '+':c=a+b;printf("add is %d",c);
		break;
		case'-':c=a-b;printf(" sub is %d",c);
		break;
		case '*':c=a*b;printf("product is %d",c);
		break;
		case '/':c=a/b;printf(" quoitent is %d",c);
		break;
		case '%':c=a%b;printf(" remainder is %d",c);
		break;
		default:printf("invalid operator");
	}
	
}
