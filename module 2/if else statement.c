#include<stdio.h>
int main()
{
	char name;
	float pr;
	printf("\nenter the student name of science or commerce:");
	scanf("\n%s",&name);
	printf("\npercentage above 80 of sci:");
	scanf("\n %f",&pr);
	if (pr>80)
	printf("\nstudent of science\n");
	else
 	printf("\nstudent of commerce");
}

