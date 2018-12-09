#include<iostream>
using namespace std;
inline int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int main()
{
	int a=10,b=20;
	int c;
	c=add(a,b);
	cout<<"Sume is  "<<c<<endl;
}
