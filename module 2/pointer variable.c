/*#include<stdio.h>
void main()
{
	int no;
	int *ptr;
	printf("Enter the value: ");
	scanf("%d",&no);
	ptr= &no;
	printf("\nadress of the value is:%d",ptr);
	*ptr++;
	printf("\nadd of the value after increment is:%d",ptr);
	printf("\n\nresult is: %d",no);
	
}*/



// changing the value
// changed the value of the address of the address...


#include<stdio.h>
void main()
{
	
	int *ptr;
	int no=50;
	printf("Enter the value: ");
	scanf("%d",&no);
	ptr= &no;
	ptr=90;
	printf("\nadress of the value is:%d",no);
	*ptr++;
ntf("\nadd of the value after increment is:%d",ptr);
	printf("\n\nresult is: %d",no);
	
}




