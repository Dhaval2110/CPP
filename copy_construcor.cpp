/*
What is copy contructor?
A copy contructor is a special constructor used to make a copy of one class object and initialize it by using another object of same class.
Sysntax : classname :: classname(const classname &);
Meaning : With reference memory is created to copy an object
*/
#include<iostream>
using namespace std;
class A
{
	int x,y; //data member
	public:
	A(int a,int b):x(a),y(b)                  // Syntax:A(int,int):x(a),y(b)
	{	
	cout<<"Parameterized constructor"<<endl;
		//cout<<"X-"<<x<<"Y-"<<y<<endl;
	}
	A(A &obj):x(obj.x),y(obj.y)
	{
		cout<<"copy contrctor call"<<endl;
	}
	void operator=(A &a)  //member func
	{
		cout<<"Assignement operator function "<<endl;
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
//b=a; // Wrong assignement
	A c=a;    // Correct assignement
//	b.print();
	c.print();
}

