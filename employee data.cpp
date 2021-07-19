#include<stdio.h>
struct employee
{
	char name[20];
	int eno;
	float salary;
}s;
int main()
{
	printf("\n Enter the name: ");
	scanf("%s",&s.name);
	printf("\n Enter the enum:");
	scanf("%d",&s.eno);
	printf("\n Enter the salary:");
	scanf("%f",&s.salary);
	printf("\n name=%s \n eno=%d \n salary=%f",s.name,s.eno,s.salary);
}
