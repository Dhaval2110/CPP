#include<iostream>
using namespace std;

// 1. Basic Syntax
//int main()
//{
//	cout<<"Welcome to C++"<<endl;
//}

//2. How to scan and print from the user
//int main()
//{
//	int x;
//	cout<<"enter the value of x";
//	cin>>x;
//	cout<<"x-"<<x<<endl;
//}

//3. Scope resolution operator
int x=10;
int main()
{
	int x=5;
	cout<<"X-"<<x<<endl;
	cout<<"Scope Resolution, X -"<<::x<<endl;
}

