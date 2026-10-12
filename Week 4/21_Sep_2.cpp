#include <iostream>
using namespace std;

int main()
{
    string Name;
    int SAP, ProgrammingMarks, DataStructuresMarks, MathematicsMarks, TotalMarks;
    float Percentage;
    
    cout<<"Enter Student Name: ";
    cin>>Name;
    cout<<"Enter SAP ID:";
    cin>>SAP;
    cout<<"Enter Programming Marks:";
    cin>>ProgrammingMarks;
    cout<<"Enter Data Structures Marks:";
    cin>>DataStructuresMarks;
    cout<<"Enter Mathematics Marks:";
    cin>>MathematicsMarks;

    TotalMarks=ProgrammingMarks+DataStructuresMarks+MathematicsMarks;
    Percentage=(TotalMarks*100)/300;

    cout<<"----- STUDENT RESULT CARD -----"<<endl;
    cout<<"Name: "<<Name<<endl;
    cout<<"SAP ID: "<<SAP<<endl;
    cout<<"Programming: "<<ProgrammingMarks<<endl;
    cout<<"Data Structures: "<<DataStructuresMarks<<endl;
    cout<<"Mathematics: "<<MathematicsMarks<<endl;
    cout<<"Total Marks: "<<TotalMarks<<endl;
    cout<<"Percentage: "<<Percentage<<"%"<<endl;

    return 0;
}
