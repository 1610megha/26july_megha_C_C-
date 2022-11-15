#include<stdio.h>
struct student
{
	int roll_no;
	char nm[20];
}st;
int main()
{
	st.roll_no=101;
	printf("enter stu. name: ");
	scanf(" %s", &st.nm);
	printf("\n stu roll_no is: %d \n, stu. name is: %s",st.roll_no,st.nm);
}
