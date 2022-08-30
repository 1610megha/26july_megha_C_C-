#include<stdio.h>
void main()
{
	int no;
	int *ptr;
	printf("enter no:");
	scanf("%d",&no);
	ptr=&no;
	printf("\naddress of the no is:%d",ptr);
	*ptr++;
	printf("\n address of the no after increment is:%d",ptr);
	printf("\n value of no is:%d",no);
}
