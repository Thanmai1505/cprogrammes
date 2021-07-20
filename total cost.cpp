#include<stdio.h>
int main()
{
	float wt,cost,noofunits,totalwt,totalcost;
	printf("\n enter wt,cost,noofunits");
	scanf("%f%f%f",&wt,&cost,&noofunits);
	totalwt = noofunits * wt;
	totalcost = noofunits * cost;
	printf("\n noofunits = %f,totalwt = %f,totalcost =%f",noofunits,totalwt,totalcost);
	return 0;
}
