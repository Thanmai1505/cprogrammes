#include<stdio.h>
int main()
{
	int A[10][10],i,j,r1,r2,c1,c2;
	printf("\n Enter No.of rows:");
	scanf("%d",&r1);
	printf("\n Enter No.of cols:");
	scanf("%d",&c1);
	for(i=0;i<r1;i++)
	   {
		 for(j=0;j<c1;j++)
	      {
		    scanf("%d",&A[i][j]);   
	      }
	   }
    for(i=0;i<r1;i++)
     {
		 for(j=0;j<c1;j++)
	      {
		    printf("%4d",A[i][j]);   
	      }
	}
 
}
