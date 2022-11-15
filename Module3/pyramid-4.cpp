 #include<stdio.h>
int main()
{
	int a,b,c;
	for(a = 1; a <= 4; a++)
	{
		for(b = 1; b <= a; b++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}
