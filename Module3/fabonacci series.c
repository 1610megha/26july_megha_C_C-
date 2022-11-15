#include<stdio.h>
int main()
{
	int no,a=0,b=1,c,i;
		printf("Enter any number of term\n");
		scanf("%d",&no);
	for( i=1 ; i<=no ; i++)
	{
		printf("\n%d",a);
			c=a+b;
			a=b;
			b=c;
	}
}
