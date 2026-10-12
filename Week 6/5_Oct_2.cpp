
#include <iostream>
using namespace std;
 
int main ()
{
    int salary;
 
    cout << "Enter salary: ";
    cin >> salary;
 
    if (salary >= 20000)
        salary = salary - (salary * 0.07);
    if ((salary >= 10000) && (salary < 20000))
        salary = salary - 1000;
 
    cout << "Final amount: " << salary;
 
    return 0;
}
