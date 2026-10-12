#include <iostream>
using namespace std;
 
int main ()
{
    char grade;
 
    cout << "Enter grade: ";
    cin >> grade;
 
    switch (grade)
    {
        case 'A': case 'a':
            cout << ">= 90";
            break;
        case 'B': case 'b':
            cout << "80 - 89";
            break;
        case 'C': case 'c':
            cout << "70 - 79";
            break;
        case 'd': case 'D':
            cout << "60 - 69";
            break;
        case 'F': case 'f':
            cout << "Below 60";
            break;
        default:
            cout << "Enter proper grade";
            break;
    }
    return 0;
}