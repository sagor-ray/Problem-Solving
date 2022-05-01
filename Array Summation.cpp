#include <iostream>
using namespace std;
int main()
{
    int i,n,sum=0,count=1;
    cout<<"Enter number of input: ";
    cin>>n;
    int array[n];
    cout<<endl<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Enter "<<count++<<" no number: ";
        cin>>array[i];
        sum=sum+array[i];
    }

    cout<<"The summation of these numbers is: "<<sum;
}
