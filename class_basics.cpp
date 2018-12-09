#include<iostream>
using namespace std;
class A
{
	public:
	int x,y; //data members
	void setdata(int a,int b)
	{
		cout<<"Inside the setdata function"<<endl;
		cout<<"enter the value of x and y"<<endl;
		cin>>x>>y;
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
