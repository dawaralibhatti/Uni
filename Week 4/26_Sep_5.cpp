#include <iostream>
using namespace std;

int main() 
{
    double fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    double celsius = (5.0 / 9.0) * (fahrenheit - 32);

    cout << fahrenheit << " F = " << celsius << " C" << endl;

    return 0;
}
