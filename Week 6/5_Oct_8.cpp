#include <iostream>
using namespace std;
int main() 
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b == a * a)
    cout << b << " is the square of " << a << endl;
    else
    cout << b << " is NOT the square of " << a << endl;
    return 0;
}