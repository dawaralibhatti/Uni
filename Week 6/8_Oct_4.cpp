#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int choice;
    const double PI = 3.14159265358979323846;

    do {
        cout << "\n========== CALCULATOR MENU ==========\n";
        cout << " 1.  Addition (integers)\n";
        cout << " 2.  Subtraction (integers)\n";
        cout << " 3.  Multiplication (integers)\n";
        cout << " 4.  Division (integers)\n";
        cout << " 5.  Addition (floating point)\n";
        cout << " 6.  Subtraction (floating point)\n";
        cout << " 7.  Multiplication (floating point)\n";
        cout << " 8.  Division (floating point)\n";
        cout << " 9.  Sine (angle in degrees)\n";
        cout << " 10. Cosine (angle in degrees)\n";
        cout << " 11. Tangent (angle in degrees)\n";
        cout << " 12. Square root\n";
        cout << " 13. Square\n";
        cout << " 14. Cube\n";
        cout << " 0.  Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        int a, b;
        double x, y;

        switch (choice) {
            case 1:
                cout << "Enter two integers: ";
                cin >> a >> b;
                cout << "Result: " << a + b << endl;
                break;
            case 2:
                cout << "Enter two integers: ";
                cin >> a >> b;
                cout << "Result: " << a - b << endl;
                break;
            case 3:
                cout << "Enter two integers: ";
                cin >> a >> b;
                cout << "Result: " << a * b << endl;
                break;
            case 4:
                cout << "Enter two integers: ";
                cin >> a >> b;
                if (b == 0)
                    cout << "Error: division by zero!" << endl;
                else
                    cout << "Result: " << a / b << " (remainder " << a % b << ")" << endl;
                break;
            case 5:
                cout << "Enter two numbers: ";
                cin >> x >> y;
                cout << "Result: " << x + y << endl;
                break;
            case 6:
                cout << "Enter two numbers: ";
                cin >> x >> y;
                cout << "Result: " << x - y << endl;
                break;
            case 7:
                cout << "Enter two numbers: ";
                cin >> x >> y;
                cout << "Result: " << x * y << endl;
                break;
            case 8:
                cout << "Enter two numbers: ";
                cin >> x >> y;
                if (y == 0)
                    cout << "Error: division by zero!" << endl;
                else
                    cout << "Result: " << x / y << endl;
                break;
            case 9:
                cout << "Enter angle in degrees: ";
                cin >> x;
                cout << "sin(" << x << ") = " << sin(x * PI / 180.0) << endl;
                break;
            case 10:
                cout << "Enter angle in degrees: ";
                cin >> x;
                cout << "cos(" << x << ") = " << cos(x * PI / 180.0) << endl;
                break;
            case 11:
                cout << "Enter angle in degrees: ";
                cin >> x;
                cout << "tan(" << x << ") = " << tan(x * PI / 180.0) << endl;
                break;
            case 12:
                cout << "Enter a number: ";
                cin >> x;
                if (x < 0)
                    cout << "Error: cannot take square root of a negative number!" << endl;
                else
                    cout << "sqrt(" << x << ") = " << sqrt(x) << endl;
                break;
            case 13:
                cout << "Enter a number: ";
                cin >> x;
                cout << x << " squared = " << x * x << endl;
                break;
            case 14:
                cout << "Enter a number: ";
                cin >> x;
                cout << x << " cubed = " << x * x * x << endl;
                break;
            case 0:
                cout << "Exiting calculator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice, try again." << endl;
        }
    } while (choice != 0);

    return 0;
}