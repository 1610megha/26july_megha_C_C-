#include<stdio.h>
void main()
{
	int*ptr;
	int no=50;
	ptr=&no;
	*ptr=90;
	printf("%d",no);
	}
