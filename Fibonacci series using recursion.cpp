#include <iostream>
using namespace std;

int fibonacci(int);
int main()
{
    int i,n;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<fibonacci(i)<<endl;
    }
}
int fibonacci(int i)
{
    if(i==0)
    {
        return 0;
    }
    if(i==1)
    {
        return 1;
    }
    return fibonacci(i-1)+ fibonacci(i-2);
}
