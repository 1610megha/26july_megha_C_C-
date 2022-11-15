#include<stdio.h>
void main()
{
	int a,b=0,c,i;
	printf("Enter Number To Summation :");
	scanf("%d",&a);
	for(i = 1; i < 10; i++)
	{
		c=a%10;
		b+=c;
		a/=10;
		if(a==0)
		{
			i=10;
			printf("Summation is : %d",b);
		}
	}
}

