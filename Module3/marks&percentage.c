#include<stdio.h>
void main()
{
	int Ma,Bio,San,Hin,Geo,Total;
	float percentage;
	printf("\nMarks & Percentage");
printf("\nMaths :",Ma);
	scanf("%d",&Ma);
printf("\nBiology :",Bio);
	scanf("%d",&Bio);
printf("\nSanskrit :",San);
	scanf("%d",&San);
printf("\nHindi :",Hin);
	scanf("%d",&Hin);
printf("\nGeogropy :",Geo);
	scanf("%d",&Geo);
	Total=Ma+Bio+San+Hin+Geo;	
	printf("\nsum total: %d",Total);
	percentage=Total/5;
	printf("\npr:%f",percentage);
	
		if(percentage>75)
		printf("\n You Are Distinction .");
	else if((percentage>60)&&(percentage<=75))
		printf("\n You Are First Class .");
	else if((percentage>50)&&(percentage<=60))
		printf("\n You Are Second Class .");
	else if((percentage>35)&&(percentage<=50))
		printf("\nYou Are Pass Class .");
	else
		printf("\nYou Are Fail .");	
}






