#include<iostream>
using namespace std;
class A
{
	int x,y; //data member
	public:
	A(int a,int b):x(a),y(b)                  // Syntax:A(int,int):x(a),y(b)
	{	
	cout<<"constructor"<<endl;
		//cout<<"X-"<<x<<"Y-"<<y<<endl;
	}
	void setdata()  //member func
	{
		cout<<"Setdata function"<<endl;
		//x=15,y=20;
	}
	void print()
	{
		cout<<"X-"<<x<<"Y-"<<y<<endl;
	}
};
int main()
{
	A a(10,20);
	a.print();
	a.setdata();
	a.print();
}

