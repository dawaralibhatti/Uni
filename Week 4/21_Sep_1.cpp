#include <iostream>
using namespace std;
int main()
{
    int n=1;
    cout<<"Number\tSquare\tCube\n";
    
    for (int i=1;i<=5;i++)
    {
        cout<<n<<"\t"<<n*n<<"\t"<<n*n*n<<endl;
        n++;
    }
    return 0;
}
