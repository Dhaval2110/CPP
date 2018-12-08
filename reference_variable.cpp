#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int &r=x;   //reference to the x as pointer in cpp
	cout<<"x="<<x<<endl;
	cout<<"r="<<r<<endl;
	
	
	//If reference variable is pointing to perticular variable then it is fixex i.e. constant , 
	//it can not be referred to another object , error it throws as below
	//int y=15;
	//r=y;
	//cout<<"y-"<<y<<"r-"<<r<<endl;

	//RV for pointer
	int *p=&x;
	int *&rp=p;
	cout<<"p="<<*p<<endl;
	cout<<"rp="<<*rp<<endl;
	

}
