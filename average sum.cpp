#include<iostream>
using namespace std;
main()
{
	int i;
	int sum=0;
	double average;
	
	for(i=1;i<=10;i++)
	{
		sum+=i;
	}
	average=sum/i;
	cout<<"\n sum is = "<<sum;
	cout<<"\n average ="<<average;
return 0;
}
