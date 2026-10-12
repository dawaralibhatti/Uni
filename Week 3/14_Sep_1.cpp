#include <iostream>
using namespace std;
int main()
{
    int a,b;

    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    cout <<endl;
    cout <<"Sum: " <<a+b <<endl;
    cout <<"Difference: " <<a-b <<endl;
    cout <<"Multiplication: " <<a*b <<endl;
    cout <<"Division: " <<a/(float)b <<endl;
    cout <<"Modulus: " <<a%b <<endl;
    cout <<endl;

    return 0;
}