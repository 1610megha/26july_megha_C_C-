#include<stdio.h>
int main()
{
	int a,b,c,x,d;
	printf("\nenter any three number:");
	x=scanf("%d%d%d%d",&a,&b,&c,&d);
	if(x==4)
    	{
		printf("\naddition: %d",a+b+c);
    	printf("\n\nmultiplication:%d",a*b*c);
    	printf("\n\nsubtraction:%d",a-b-c);
	}
}

