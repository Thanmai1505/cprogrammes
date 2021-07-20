#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,y1,y2,Distance;
	printf("\n enter coordinates x1,x2");
	scanf("%f%f",&x1,&x2);
	printf("\n enter coordinates y1,y2");
	scanf("%f%f",&y1,&y2);
	Distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("\n%f",Distance);
	return 0;
}


