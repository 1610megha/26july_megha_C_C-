#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the No:");
	scanf("%d",&n);
	for( i=1 ; i<=10 ; i++)
	{
		printf("\n %d * %d = %d",n,i,n*i);
	}
}
