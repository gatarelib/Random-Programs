
	#include <iostream>
	#include <string>
	using namespace std;
	int main ()
	{
	int Day = 1;
	int Daysdelivery = 5;
	double Wheatprice = 750;
	int Daysofweek = 6;
	double Daysales = 0.00;
	double Weeklysales = 0.00;
	cout << "Day  Daysales   Weeklysales" << endl;
	for (Day = 1; Day <= Daysofweek; Day ++)
	{
	Daysales = Wheatprice * Daysdelivery;
	Weeklysales = Weeklysales + Daysales;
	cout << Day << "    " << Daysales << "       " << Weeklysales << endl;
	}
	cout << "Total Weekly sales = " << Weeklysales << endl;
	return 0;
	}
