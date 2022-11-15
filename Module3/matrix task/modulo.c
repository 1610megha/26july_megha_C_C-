#include<stdio.h>
void main()
{
	int no[20][20];
	int nu[20][20];
	int a,b,c,d,e;
	printf("enter the row or clounm order:");
	scanf("%d %d",&d,&e);
	
	printf("\n Enter the first matrix value-->\n");
	for( a=0 ; a<d ; a++ )
	{
		for( b=0 ; b<e ; b++)
		{
	 		printf("enter your value no[%d] [%d]=",a,b);
	 		scanf("%d",&no[a][b]);
		}
	}
	printf("\n Enter the first matrix value-->\n");
	for( a=0 ; a<d ; a++)
	{
			for (b=0 ; b<e ; b++)
		{ 
				printf("enter your value no[%d] [%d]=",a,b);
				scanf("%d",&nu[a][b]);
		}
	}
	/*`printf("\n first matrix value is below-->");
	for(a=0 ; a<d ; a++)
	{
a			for( b=0 ; b<e ; b++)
		{
				printf(" %d",no[a][b]);
		}
				printf("\n");
	}*/
	/*printf("\n first matrix value is below-->");
	for(a=0 ; a<d ; a++)
	{
			for( b=0 ; b<e ;b++)
		{
				printf(" %d",nu[a][b]);
		}
				printf("\n");
	}*/
	printf("\n matrix modulo is below-->\n");
	for( a=0 ; a<d ; a++)
	{
			for(b=0 ; b<e ; b++)
		{
				c=no[a][b]%nu[a][b];
				printf(" %d",c);
		}
				printf("\n");
	}
	}
