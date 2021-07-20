#include<stdio.h>
struct student
{
	int rno;
	float marks;
	char name[20];
}c;
int main()
{
	c.rno=65;
	c.marks=80;
	printf("enter the name:");
	scanf("%s",&c.name);
	printf("name=%s,rno=%d,marks=%f",c.name,c.rno,c.marks);
	
}
