/*
Q :   What is constructor?
Ans : A constuctor is special member function of a class which is invoked automatically when object of the same class is created and gets 
    automatically intialized by constuctor
 
#Characteristics 
1. A constuctor has the same name as the class to which it belongs.
2. It does not have return type, not even void.
3. It should be defined in public section.
4. Address of constructor can not be referred.
5. Constructor should be initialized.
6. It can have default args.
7. It can be overloaded.
8. A constructor can not be inherited although derived class can call the base constuctor.
9. A constructor can not be virtual.
*/
#include<iostream>
using namespace std;
class A
{
	int x,y; //data member
	public:
	A():x(10),y(20)   // parametric constuctor initialization
	//A() --> Default constructor
	{
		cout<<"constructor"<<endl;
		//cout<<"X-"<<x<<"Y-"<<y<<endl;
	}
	void setdata()  //member func
	{
		cout<<"Setdata function"<<endl;
		x=15,y=20;
	}
	void print()
	{
		cout<<"X-"<<x<<"Y-"<<y<<endl;
	}
};
int main()
{
	A a;
	a.print();
	a.setdata();
	a.print();
}

/*
Types of constructor :
1. Default constructor
2. Parametrized constructor
3. Copy constructor 
4. Dynamic consructor
*/

