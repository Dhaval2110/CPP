// Swap two variables without using pointer
#include<iostream>
using namespace std;
void swap(int &p,int &q);
int main()
{
	int x=10;
	int y=20;
	swap(x,y);
	cout<<"x-"<<x<<"y-"<<y<<endl;
}
void swap(int &p,int &q)
{
	int t;
	t=p;
	p=q;
	q=t;
	//internal convergence :
	// int &p=x and int &q=y as reference variable concept
}
