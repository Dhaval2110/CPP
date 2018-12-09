#include<iostream>
using namespace std;
int main()
{
	
	
//1. For a single element
//  int *p;
//	p=new int;
//	*p=20;
//	cout<<"*p="<<*p<<endl;

//2. For an array integers

	int *p=new int[5];
	for(int i=0;i<5;i++)
	p[i]=i+10;
	 
	for(int i=0;i<5;i++)
	cout<<"p["<<i<<"]="<<p[i]<<endl;
}
