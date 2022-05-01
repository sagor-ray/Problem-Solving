#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout<<"Enter the grade: ";
    cin>>grade;
    switch(grade)
    {
        case 'A':{
            cout<<"Excellent";
            break;
        }
        case 'B': cout<<"Good";
        break;
        case 'C': cout<<"Passed";
        break;
        default: cout<<"invalid Enter";
    }
}
