#include <iostream>
using namespace std;

int main()
{
    double miles;
    cout << "Enter distance in miles: ";
    cin >> miles;

    double km = miles * 1.069;

    cout << miles << " miles = " << km << " kilometres" << endl;

    return 0;
}
