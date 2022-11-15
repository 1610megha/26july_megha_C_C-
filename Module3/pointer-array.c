#include<stdio.h>
void main()
{
	int a[20];
	int *ptr;
	int b;
	ptr=&a[0];
	printf("enter the value-\n");
	for( b=0 ; b<10 ; b++)
{
	printf("no[%d]:",b+1);
	scanf("%d",&*ptr++);
}
	ptr=&a[0];
	printf("\nvalue of the address is--\n");
	for( b=0 ; b<10 ; b++)
{
	printf("\nno[%d]:\t\t%d",b+1,*ptr++);
}
}

