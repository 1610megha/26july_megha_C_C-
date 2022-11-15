// SWITCH CASE AND NESTED SWITCH....

#include<stdio.h>
void main()
{
	int choice;
	int x,y;
	float result;
	printf(" Enter ur the Value :");
	scanf(" %d%d", &x,&y);
	printf("\n1. add\n2. mul\n3. sub\n4. div\n5. mod\n");
	printf(" Enter ur choice :");
	scanf(" %d",&choice);
	switch(choice)
{
	case 1: 
		printf("\naddition is : %d ",x+y);
	break;
	
	case 2:
   		printf("\nmultiplication is %d ",x*y);
	break;
	
	case 3:
		printf("\nsubration is %d ",x-y);
	break;
	
	//result=x/y
	case 4:
		printf("\ndivision is : %d ",x/y);
	break;
	
	case 5:
		printf("\nmodulo is : %d",x%y);		
	break;

	default:
		printf("Enter ur vaild chioce.....");
}
}
