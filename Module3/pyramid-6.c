#include<stdio.h>
void main()
{
	int x,i,j;
	printf("how many lines ine stars to print:");
	scanf("%d",&x);
	for( j=1 ; j<=x ; j++)
	{
		for(i=1 ; i<=j ; i++)
		{
			printf("*");
		}
		printf("\n");
	}
}
