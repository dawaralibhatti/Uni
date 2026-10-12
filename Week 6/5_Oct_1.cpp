#include <iostream>
using namespace std;
 
int main ()
{
    cout << "Enter four numbers: ";
    int a, b, c, d, greatest;
    cin >> a >> b >> c >> d;
 
    if ((a>b)&&(a>c)&&(a>d))
        greatest = a;
    else if ((b>a)&&(b>c)&&(b>d))
        greatest = b;
    else if ((c>a)&&(c>b)&&(c>d))
        greatest = c;
    else
        greatest = d;
 
    cout << "Greatest is " << greatest;
 
    return 0;
}