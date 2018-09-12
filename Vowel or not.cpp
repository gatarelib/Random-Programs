//only for a and e i have notime
#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"enter three numbers"<<endl;
	cin>>a>>b>>c;
	if (a<b && a<c)
	cout<<"the smallest # is="<<a<<endl;
	else if(b<a && b<c)
	cout<<"the smallest # is="<<b<<endl;
	else
	cout<<"the smallest # is="<<c<<endl;
}
