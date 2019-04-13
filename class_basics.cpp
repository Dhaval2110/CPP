#include<iostream>
#include<string.h>
using namespace std;
//class A
//{
//	//public:                                          //public data and member functuibs canve accessed anywhere in the progrma
// 	//protected:
// 	private:
//	int x,y; //data members	
//	public:
//	void setdata(int a,int b) //member functions
//	{
//		cout<<"Inside the setdata function"<<endl;
//		//cout<<"enter the value of x and y"<<endl;
//		A::x=a,y=b;                                  //using scope resolution operator we can access the private data
//		//cin>>A::x>>A::y;
//	}
//	void printdata()
//	{
//		cout<<"printdata function"<<endl;
//		cout<<"x="<<x<<"y="<<y<<endl;
//	}
//};
//int main()
//{
//	A obj1,obj2,obj3;
//	obj1.setdata(10,20);
//	obj1.printdata();
//	
//}
class CPP
{
	protected:
	string s;
	public:
	void setdata(string str)
	{
		CPP::s=str;
	//	cout<<"enter the string";
	//	cin>>str;
	}
	void printdata()
	{
		cout<<"string is "<<CPP::s<<endl;
	}
};
int main()
{
	CPP c1;
	c1.setdata("Dhaval");
	c1.printdata();
}
