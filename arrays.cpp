#include <iostream>
using namespace std;
main()
{
    int a[10],i,n;
    cout<<"enter how many numbers you want in the array\n";
    cin>>n;
    cout<<"enter the elements of the array\n";
    for(i=0;i<=n;i++)
        cin>>a[i];
    cout<<"content of the array\n";
    for(i=0;i<=n;i++)
        cout<<a[i]<<"\n";
    return 0;
}
