#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length,width,area;
    void Sagor()
    {
        int length,width;
        cout<<"Enter the value of Length and Width: ";
        cin>>length>>width;
     area=length*width;
     cout<<"The value of area is: "<<area;
    }
};
int main()
{
    Rectangle a;

    a.Sagor();


}
