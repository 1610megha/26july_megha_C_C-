#include<iostream>
using namespace std;
 class demo{
 	int a;
 	public:
 		void setX(int i)
 		{
		 int x=i;
		}
		int getX()
		{
			return 0;
		}
 };
 int main()
 {
 	demo obj[4];
 	int i;
 	for( i=0 ; i<4 ; i++)
 	{
 		obj[i].setX(i);
	}
	for( i=0 ; i<4 ; i++ )
	{
		
		cout<<"obj["<<i<<"].getX():"<<obj[i].getX()<<endl;
	}
	return 0;
 }
