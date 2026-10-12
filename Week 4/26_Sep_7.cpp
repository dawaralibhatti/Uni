#include <iostream>
using namespace std;

int main() 
{
    double sub1, sub2, sub3, sub4, sub5;

    cout << "Enter marks obtained in 5 subjects: ";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;

    double total = sub1 + sub2 + sub3 + sub4 + sub5;
    double percentage = (total / 500) * 100;

    cout << "Total marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}