#include<iostream>
using namespace std;
int main()
{
	int m =10,a,b;
	for( a = 1 ; a <= m ; a++ )
	{
		for( b = 1 ; b < a ; b++ )
		cout<<" ";
		for( b = 1 ; b <= m-a + 1 ; b++ )
		cout<<"* ";
		cout<<endl;
	}
	return 0;
}					
