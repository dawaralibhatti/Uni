#include <iostream>
using namespace std;

int main() 
{
    int totalStudents;
    double feePerStudent;

    cout << "Enter total number of students: ";
    cin >> totalStudents;
    cout << "Enter fee per student: ";
    cin >> feePerStudent;

    double totalFee = totalStudents * feePerStudent;

    cout << "Total fee collected: " << totalFee << endl;

    return 0;
}