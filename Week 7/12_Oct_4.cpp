#include<iostream>
using namespace std;
int main()
{
    int n, total=0;
    char choice;
    cout<<"Enter number of customers: ";
    cin>>n;
    for (int i =1; i<=n; i++)
    {
        cout<<"Customer "<<i<<":\n";
        cout<<"A. Apple (Rs. 100)\n";
        cout<<"B. Book (Rs. 500)\n";
        cout<<"P. Pen (Rs. 50)\n";
        cout<<"Enter choice: ";
        cin>>choice;
        cout<<"Customer Bill: Rs. ";
        switch (choice)
        {
            case 'A':cout<<"100\n"; total+=100;
            break;
            case 'B':cout<<"500\n"; total+=500;
            break;
            case 'P':cout<<"50\n"; total+=50;
            break;
            default:cout<<"Invalid choice\n";
        }

    cout<<"Total Store Income: " <<total;
}
