// display the series of number
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\n enter the value of a:");
	scanf("%d",&c);
	for (a=1; a<=c; a++)
	{
		for (b=a;b>=1;b--)
		{
			printf("%d ",b);
		
		}
		printf("\n");
	}
	
	for(a=c;a>=1;a--)
	{
		for(b=a;b>=1;b--)
		{
			printf("%d ",b);
		}
		printf("\n");
	}
}
