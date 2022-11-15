 #include<stdio.h>
 void no(int a,int b)
 {
 	int val;
 	val=a;
 	a=b;
 	b=val;
 	printf("a=%d b=%d\n",a,b);
}
int main()
{
	int m=100 , j=50;
	no(m,j);
    printf("m=%d j+%d",m,j);
}
