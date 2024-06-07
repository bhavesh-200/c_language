#include<stdio.h>
void main()
{
	int i,j;
	for(i=41;i<=45;i++)
	{
		for(j=41;j<=45;j++)
		{
			if(j<=i)
			{
				printf(" %d",j);	
			}
			else
			{
				printf("  "); 
			}
		}
		printf("\n");
	}
}

