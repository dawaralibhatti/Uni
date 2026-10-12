#include <iostream>
using namespace std;
int main() 
{
    float m1, m2, m3, avg;
    cout << "Enter marks of three subjects: ";
    cin >> m1 >> m2 >> m3;
    avg = (m1 + m2 + m3) / 3;
    if (avg > 80) 
    {
        cout << "You are above standard" << endl;
        cout << "Admission Granted" << endl;
    }
    return 0;
}