/*I#include<stdio.h>
void main()
{
	 int a,b ;
 	for(a=1;a<=5;a++) //rows
 	{
 		for(b=1;b<=a;b++)  //columns
 		{
 			printf("*");
		}
		printf("\n");
	}

}*/








/*
#include<stdio.h>
void main()
{
	 int a,b ;
 	for(a=1;a<=5;a++) //rows
 	{
 		for(b=5;b>=a;b--)  //columns
 		{
 			printf("*");
		}
		printf("\n");
	}

}*/



/*
#include<stdio.h>
void main()
{
	 int a,b,k ;
 	for(a=1;a<=5;a++) //rows
 	{
 		for(b=a;b<=5;b++)  //space
 		{
 			printf(" ");
		}
		for(k=1;k<=a;k++)
		{
			printf("*");  // columns,,
		}
		printf("\n");
	}

}*/



#include<stdio.h>
void main()
{
	 int a,b,k ;
 	for(a=1;a<=5;a++) //rows
 	{
 		for(b=1;b<=a;b++)  //space
 		{
 			printf(" ");
		}
		for(k=a;k<=5;k++)  // columns
		{
			printf("*");
		}
		printf("\n");
	}

}
