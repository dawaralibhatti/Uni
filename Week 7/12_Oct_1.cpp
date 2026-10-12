#include <iostream>
using namespace std;

int main() 
{
    cout << "Asc\tDes" << endl;
    cout << "___________" << endl;

    for (int i = 1; i <= 5; i++) 
    {
        cout << i << "\t" << (6 - i) << endl;
    }

    return 0;
}
