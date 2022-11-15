#include<stdio.h>
void ptr(int *m,int *j)
{
	int val;
		val= *m;
		*m = *j;
		*j = val;
		printf("m= %d j= %d\n",*m,*j);
	
}
int main()
{
	int a=2 , b=4;	
	ptr(&a,&b);
	printf("\na= %d b= %d",a,b);
	
}
