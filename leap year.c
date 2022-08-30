#include<stdio.h>
void main()
{
	int year;
	printf("\nEnter a Year" );
	scanf("\n%d",&year);
	if(year%400==0||year%4==0&&year%100!=0)
     printf("Is Leap Year.");
	else
	printf("Is Not Leap Year.");	
}


/*Explanation:  
			In this program,relational operator equal to used for return value 0.
			And logical operator AND(&&) to get both the condition are true otherwise 0;
			logical operator OR(||) to get one condition true; logical operator NOT(!)
			to get condition not equal to 0.Even i used if else statement to display the result.*/
