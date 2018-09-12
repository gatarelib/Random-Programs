//only for a and e i have notime 
#include<iostream>
using namespace std;
main()
{
int day;
cout<<"enter any number between 1 and 7\n";
cin>>day;
switch (day)
	{
		case 1:
			cout<<"Monday";
			break;
		case 2:
			cout<<"Tuesday";
			break;
		case 3:
			cout<<"Wednesday";
			break;
		case 4:
			cout<<"Thursday";
			break;
		case 5:
			cout<<"Friday";
			break;
		case 6:
			cout<<"Saturday";
			break;
		case 7:
			cout<<"Sunday";
			break;
		default:
			cout<<"Follow instructions";
	}
return 0;
}
