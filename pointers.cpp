#include<iostream> 
using namespace std;
main() 
{  int x; 
int *ptr1,ptr2; 
x=10; 
ptr1=&x; 
ptr2=ptr1;
 cout  << "value of x =\n"<< x; 
 cout << "value of ptr1=\n" <ptr1; 
 cout << "value of ptr2 =\n"<< ptr2; 
 return 0;
 } 
