#include <iostream>
using namespace std;

int main()
{
    double weight, feet, inches;

    cout << "==== BMI CALCULATOR ====" << endl;
    cout << "Enter weight in kilograms: ";
    cin >> weight;
    cout << "Enter height in feet: ";
    cin >> feet;
    cout << "Enter remaining inches: ";
    cin >> inches;

    double totalInches = feet * 12 + inches;
    double heightMeters = totalInches * 0.0254;

    if (weight <= 0 || feet < 0 || inches < 0 || totalInches <= 0)
    {
        cout << "\nError: Weight and height must be positive values." << endl;
    }
    else
    {
        double bmi = weight / (heightMeters * heightMeters);

        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "\nYour BMI is: " << bmi << endl;

        if (bmi < 18.5)
            cout << "Status: Underweight" << endl;
        else if (bmi < 25.0)
            cout << "Status: Normal" << endl;
        else if (bmi < 40.0)
            cout << "Status: Overweight" << endl;
        else
            cout << "Status: Obese" << endl;
    }

    cout << "\nThank you for using BMI Calculator!" << endl;
    return 0;
}