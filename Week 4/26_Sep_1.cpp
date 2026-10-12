#include <iostream>
using namespace std;

int main()
{
    int years;
    cout << "Enter age in years: ";
    cin >> years;

    int months = years * 12;
    int days = years * 365;

    cout << "Age in months: " << months << endl;
    cout << "Age in days: " << days << endl;

    return 0;
}
