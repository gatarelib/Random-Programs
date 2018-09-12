#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter any two numbers to be tested\n";
	cin>>x>>y;
	if(x==y)
	cout<<"they are equal\n";
	else if(x>y)
	cout<<"largest value is"<<x;
	else
	cout<<"largest value is\n"<<y;
	return 0;
}
