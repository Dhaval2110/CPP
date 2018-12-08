#include<iostream>
using namespace std;
float add(int a,float b,double c=0,int d=0)
{
	return a+b+c+d;
}
int main()
{
	int x=10,y=20;
	float f=22.7;
	double d=4.5;
	cout<<"add(x,f)"<<add(x,f)<<endl;
	cout<<"add(x,f,d)"<<add(x,f,d)<<endl;
	cout<<"add(x,f,d,y)"<<add(x,f,d,y)<<endl;
	
}
