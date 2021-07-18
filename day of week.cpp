#include<stdio.h>
int main() 
{
	int num;
	printf("\n enter a num:");
	scanf("%d",&num);
	switch(num)
	{
		case 1:printf("\n monday");
	    break;
	    case 2:printf("\n tuesday");
	    break;
	    case 3:printf("\n wednesday");
	    break;
	    case 4:printf("\n thursday");
	    break;
	    case 5:printf("\n friday");
	    break;
	    case 6:printf("\n saturday");
	    break;
	    case7:printf("\n sunday");
	    break;
	    default:printf("\n only 7 days in a week");
		
	}
	    return 0;
	    
	
}
