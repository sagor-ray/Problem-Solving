#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int r,num=121;
  int sum=0;
   int temp;
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    if(num==sum)
    {
        cout<<"Palindrome number";

    }
    else
    {
        cout<<"Not palindrome number";
    }
    getch();
}
