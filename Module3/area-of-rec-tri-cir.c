//#include<stdio.h>
//#define pi 3.14
//void main()
//{
//	float r,l,s,bs,h;
//	printf("\n\t\t1-->enter the radius of circle:");
//	scanf("%f",&r);
//	printf("\n\t//*ans of circle*//");
//	printf("\n\t-->area of circle=%f",(pi*r*r));
//	printf("\n\t\t2 rectangle");
//	printf("\n\t-->enter length of rectangle weight:");
//	scanf("%f",&l);
//	printf("\n\t-->enter breath of rectangle:");
//	scanf("%f",&s);
//	printf("\n\t//*ans of rectangle*//");
//	printf("\n\t-->area of rectangle is = %f:",1*s);
//	printf("\n\t\t3triangle");
//	
//	
//	
//	printf("\n\t-->enter the base of triangle:");
//	scanf("%f",&bs);
//	printf("\n\t-->enter the height of triangle:");
//	scanf("%f",&h);
//	printf("\n\t//*ans of triangle*//");
//	printf("\n\t-->area f triange is = %f:",0.5*bs*h);
//	scanf("%f",&l);
//}



// using switch case...........................



#include<stdio.h>
#define pi 3.14
void main()
{
	int a,base,hei,len,bre,rad;
	printf("\nselect your process: \n1.area of triangle.\n2.area of reactangle.\n3.area of circle.");
//	scanf("%d",&a);
	printf("\n\nselect your process no:");
	scanf("%d",&a);
	
	switch(a)
	
	{
	case 1:
		
	printf("\n\t-->enter the base of triangle:");
	scanf("%d",&base);
	printf("\n\t-->enter the height of triangle:");
	scanf("%d",&hei);
	printf("\n\t//*ans of triangle*//");
	printf("\n\t-->area f triange is = %f:",0.5*base*hei);
	scanf("%d",&len);
	break;
	
	case 2:
	printf("\n\t-->enter length of rectangle weight:");
	scanf("%d",&len);
	printf("\n\t-->enter breath of rectangle:");
	scanf("%d",&bre);
	printf("\n\t//*ans of rectangle*//");
	printf("\n\t-->area of rectangle is = %d:",len*bre);
	break;
	
	case 3:
	printf("\n\t\t1-->enter the radius of circle:");
	scanf("%f",&rad);
	printf("\n\t//*ans of circle*//");
	printf("\n\t-->area of circle=%f",(pi*rad*rad));
	break;
	
	default:
		printf("Enter vaild select..");
		break;
	}
}
