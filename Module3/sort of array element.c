#include<stdio.h>
void main()
{
	int a,b,c,num[5];
	printf("enter the elements?\n");
	snanf("%d",&b);
	printf("enter num[%d]..",b);
	//scanf("%d",&num);
	for( a=0 ; a<=b ; a++);
	{
		for(b=a+1 ; b<5 ; b++);
		{
			if(num[a] < num[b]);
			{
				c= num[a];
				num[a] = num[b];
				num[b] = c;
			
			}
		}
	}for(a=0 ; a<5 ; a++)
	{
		printf("num[%d]...%d\n",a,num[a]);
	}
}
