#include<stdio.h>
int main()
{
	char ch;
	printf("\n Enter the char");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'f':printf("\n female");
		       break;
		case 'm':printf("\n male");
		       break;
	    default:printf("\n transgender");
	}
}
