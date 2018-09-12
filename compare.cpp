/*given the following values 90,100,60,70,300
write a program that will accept the values then 
compare and display the highest value using functions
*/
#include <iostream>
using namespace std;
int compare(int,int,int,int,int);
main()
{
	int high;
	int m, n, o=60, p=70, q=300;
	cout<<"enter 5 numbers to be compared\n";
	cin>>m>>n>>o>>p>>q;
	cout<<"between"<<m
		<<","
		<<n
		<<","
		<<o
		<<","
		<<p
		<<" and "
		<<q;
		high=compare(m,n,o,p,q);
	cout<<"\n"<<high
		<<" is highest";
	return 0;
}
int compare(int a,int b,int c,int d,int e)
{
	if (a>b && a>c && a>d && a>e)
	return a;
	else if(b>a && b>c && b>d && b>e)
	return b;
	else if(c>a && c>b && c>d && c>e)
	return c;
	else if(d>a && d>b && d>c && d>e)
	return d;
	else
	return e;
}
