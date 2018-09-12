#include <iostream>
using namespace std;

double computeGross(double, double);
double computeDeductions(double);
void computeNet();
void validateHours();
void validateWage();

int main()
{
    double hours, wage;
    cout << "Please input the hourly wage of the employee. " << endl;
    cin >> wage;
    cout << "Please input the number of hours the employee worked." << endl;
    cin >> hours;
    computeGross(hours, wage);
    double computeDeductions(double grosspay);
    computeNet();
    validateHours();
    validateWage();
    return 0;
}

double computeGross(double hours, double wage)
{
    double grosspay = hours*wage;
    cout << "The employee's gross pay is: " << " " << grosspay << endl;
}

double computeDeductions(double grosspay)
{
    double total, sstotal, taxtotal;
    double socialsecurity = .175;
    double tax = .2;
    double reducedtax = .1;
    sstotal = grosspay*socialsecurity;
    if (grosspay < 2500)
    {

        taxtotal = grosspay*reducedtax;
        total = sstotal + taxtotal;
        cout << "The total amount of deductions is: " << total << endl;
    }
    else
    {
        taxtotal = grosspay*tax;
        total = sstotal + taxtotal;
        cout << "The total amount of deductions is: " << total << endl;
    }
}
void computeNet()
{
    double  netsalary;
    netsalary = grosspay - deductions;
    cout << "The net salary is: " << netsalary << endl;
    cout << "The gross salary is: " << grosspay << endl;
    cout << "The deductions total: " << deductions << endl;
}
void validateHours()
{
    if (hours > 150 || hours < 0)
    {
        cout << "Invalid number of hours." << endl;
    }
}
void validateWage()
{
    if (wage > 200 || wage < 0)
    {
        cout << "Invalid wage." << endl;
        return ;
    }
}