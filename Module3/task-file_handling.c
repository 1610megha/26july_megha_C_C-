#include<stdio.h>
int main()
{
	FILE *ffile;
	char str[10];
	int i,n;
	ffile=fopen("C:/assiment/assiment/table1.txt","a");
	fprintf(ffile,"str1");
	fclose("ffile");
	ffile=fopen("C:/assiment/assiment/table1.txt","r");
	fscanf(ffile,"%s",&str);
	printf("%s",str);
	fclose(ffile);
	
	printf("\nEnter the No:");
	scanf("%d",&n);
	for( i=1 ; i<=10 ; i++)
	{
		printf("\n %d * %d = %d",n,i,n*i);
	}
	return 0;
}

