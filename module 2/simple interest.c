#include<stdio.h>
void main()
{
	float amt,rate,time,si,a,ci;
	printf("Enter the amount:");
	scanf("%f",&amt);
	printf("Enter the rate:");
	scanf("%f",&rate);
	printf("Enter the time:");
	scanf("%f",&time);
	//si=(amt*rate*time)/100;
   //printf("\n\nsimple interest:%f",si);
   //printf("Enter the value of a:");
   //scanf("\n%f",&a);
   a=(1+rate)/100;
   ci=(amt-a);
 printf("\ncompond interset:%f ",ci);
}
