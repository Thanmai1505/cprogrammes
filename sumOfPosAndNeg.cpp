#include<stdio.h>
int main()
{
	int a,b,c,d,e,psum,nsum;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	psum = 0;
	if(a>0){psum+=a;}
	if(b>0){psum+=b;}
	if(c>0){psum+=c;}
	if(d>0){psum+=d;}
	if(e>0){psum+=e;}
	printf("\n sum of positive integers is %d",psum);
	nsum = 0;
	if(a<0){nsum+=a;}
	if(b<0){nsum+=b;}
	if(c<0){nsum+=c;}
	if(d<0){nsum+=d;}
	if(e<0){nsum+=e;}
	printf("\n sum of negative integers is %d",nsum);
	
	
}   

