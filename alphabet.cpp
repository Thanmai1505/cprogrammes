#include<stdio.h>
int main()
{
	char ch;
	printf("\n Enter a character:");
	scanf("%c",&ch);
	if((ch>=97&&ch<=122)||(ch>=65&&ch<=90))
	//if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='z'));
	printf("it is alphabet");
}
