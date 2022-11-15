#include<stdio.h>
void main()
{
	int num[10],a,max=0,b;
		printf("how many elements?\n");
		scanf("%d",&b);
		printf("enter %d elements:\n",b);
	for(a=0 ; a<b ; a++)
	{
		scanf("%d",&num[a]);
		if(num[a]>max)
		{
			max=num[a];
		}
	}
	printf("maximun=%d",max);
}
