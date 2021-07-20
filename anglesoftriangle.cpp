#include<stdio.h>
#include<math.h>
int main() 
{
	float a,b,c;
	printf("\n enter two angles:");
	scanf("%f%f",&a,&b);
	c = 180-a-b;
	printf("\n%f",c);
	return 0;
	
}

