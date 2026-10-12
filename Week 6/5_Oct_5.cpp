#include <iostream>
using namespace std;

int main()
{
    double a, b;

    cout << "Enter a number:";
    cin >> a;
    cout << "Enter another number:";
    cin >> b;

    char choice;
    cout << "----------\nPress A for addition\nPress S for subtraction\nPress M for multiplication\nPress D for division\n----------\nEnter operation:";

    cin >> choice;

    switch (choice)
    {
        case 'A': cout << "Addition: " << a+b; break;
        case 'S': cout << "Subtraction: " << a-b; break;
        case 'M': cout << "Multiplication: " << a*b; break;
        case 'D':
            if (b == 0)
                cout << "Division with zero not possible";
            else
                cout << "Division: " << a / b;
            break;
        default:
            cout << "Error! Please enter one of few options";
    }

    return 0;
}