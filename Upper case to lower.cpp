#include <iostream>
using namespace std;
int main()
{
    char upper,lower;
    cout<<"Enter a lower case latter: ";
    cin>>lower;
    upper=toupper(lower);
    cout<<upper;
    cout<<"\n\nThe size of character is : "<<sizeof(upper)<<" Bytes";
}
