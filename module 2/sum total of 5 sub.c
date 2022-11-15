#include<stdio.h>
void main()
{
	int Ma,Bio,San,Hin,Geo,Total;
	float percentage;
	printf("\nMarks & Percentage");
 	printf("\nmaths :",Ma);
	scanf("%d",&Ma);
	printf("\nenglish :",Bio);
	scanf("%d",&Bio);
printf("\nhistory :",San);
	scanf("%d",&San);
printf("\nsocial :",Hin);
	scanf("%d",&Hin);
printf("\nbiology :",Geo);
	scanf("%d",&Geo);
	Total=Ma+Bio+San+Hin+Geo;	
	printf("\nsum total: %d",Total);
	percentage=Total/5;
	printf("\npr:%f",percentage);
}

