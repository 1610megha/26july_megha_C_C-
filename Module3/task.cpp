#include<iostream>
using namespace std;
class sub
{
	public:
		int a,b;
		void getdata()
		{
			cout<<"enter your value";
			cin>>a;
			cout<<"enter your value:";
			cin>>b;
		}
	
};
class add : public sub
{
	public:
		void addition()
		{
			cout<<"\naddtion is:"<<a+b;
		}		
 };

int main ()
{
	int c;
	cout << "Enter Your choise ";
	cin >> c;
	if (c==1){
		add a1;
		a1.getdata();
		a1.addition();
	}
	
	return 0;
}
