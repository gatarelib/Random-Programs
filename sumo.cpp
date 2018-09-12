#include<iostream>
using namespace std;
main()
{
   int a,b;
   int sum=0;
   cout<<"enter a three-digit number\n";
   cin>>a;
	while(a>0)
	{
		b=a%10;
		sum=sum+b;
   		a=a/10;
	}
   
   cout<<sum;
return 0;
}
