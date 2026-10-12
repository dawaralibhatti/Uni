#include <iostream>
using namespace std;
int main() 
{
    int a, b, c, max;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    max = a;
    if (b > max) 
        max = b;
    if (c > max) 
        max = c;
    cout << "Maximum number is: " << max << endl;
    return 0;
}