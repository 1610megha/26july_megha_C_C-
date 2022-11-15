#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter value: ");
	scanf("%d",&a);
	
	while(a>0)
	{
		b=a%10;
		printf("\n %d",b);
		a=a/10;
		printf("\nenter  the value: %d",a);
	}
}
