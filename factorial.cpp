//factorial program
#include<iostream>
using namespace std;
int factor(int);
int main()
{
	int a;
	cout<<"enter any number\n";
	cin>>a;
	factor(a);
	return 0;
}
factor(int x)
	{
		int i,fact=1;
		cout<<"factorial= \n";
		for(i=x;i>=1;i--)
		{
		fact=fact*x;
		cout<<"\n"
			<<fact;
		}

	}
