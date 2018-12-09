#include<iostream>
using namespace std;
class A
{
	//public:                                          //public data and member functuibs canve accessed anywhere in the progrma
 	protected:
	int x,y; //data members	
	public:
	void setdata(int a,int b) //member functions
	{
		cout<<"Inside the setdata function"<<endl;
		//cout<<"enter the value of x and y"<<endl;
		A::x=a,y=b;
		//cin>>A::x>>A::y;
	}
	void printdata()
	{
		cout<<"printdata function"<<endl;
		cout<<"x="<<x<<"y="<<y<<endl;
	}
};
int main()
{
	A obj1,obj2,obj3;
	obj1.setdata(10,20);
	obj1.printdata();
	
}
