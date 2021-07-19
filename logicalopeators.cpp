#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	bool AND,OR,NOT;
	printf("\nEnter three integers");
	scanf("%d%d%d",&a,&b,&c);
	AND=a>1&&b<1&&c<5;
	OR=a==1||b<2||c>5;
	NOT=a!=1;
	printf("\n%d%d%d",AND,OR,NOT);
}
