#include<iostream>
using namespace std;
int swap(int,int,int);
main()
{
	int a=2;
	int b=4;
	swap(a,b);
	cout<<"a is "
		<<a;
	cout<<"\nb is "
		<<b;
	return 0;
}
swap(int x,int y)
	{
		int z;
		z=x;
		x=y;
		y=z;
	}
