#include<iostream>
using namespace std;
main()
{
   int a,b,sum;
   cout<<"enter a three-digit number\n";
   cin>>a;
   a=a%10;
   b=a/10;
   sum=a+b;
   cout<<sum;
return 0;
}
