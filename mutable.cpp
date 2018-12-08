//mutable is the keyword used to allow a perticular
//datamember of a constant object to be modified

#include<iostream>
using namespace std;
struct st
{
	int x;
	mutable int y;
	int z;
};
int main()
{
	const struct st var={10,20,30};
	var.y=25;                //valid
	//var.z=35;              //invalid
	cout<<"x="<<var.x<<endl;
	cout<<"y-"<<var.y<<endl;
	cout<<"z-"<<var.z<<endl;
}
