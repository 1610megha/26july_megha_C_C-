#include<iostream>
using namespace std;
int main()
{
	// an array with 5 rows and 2 colunms.
	int a[5][5],i,j;
	//	output each array element's value
	for( i=0 ; i<5 ; i++ )
	{
		for(j=0 ; j<i ; j++)
			{
				cout<<"a["<<i<<"]["<<j<<"]:";
				cout<<a[i][j]<<endl;
				cin>>a;
	return 0;
	
		}
	}
}
