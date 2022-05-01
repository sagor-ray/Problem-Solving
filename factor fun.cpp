#include <iostream>
using namespace std;

int arr[5] = {1,2,4,6,8};
int j=0, fre[5] = {0},take[50],n=0,count=0;
int main()
{
    for(int i=0; i<5; i++)
    {
        if(i == 0)
        {
            cout<<i<<" ";
        }
        else
        {
            for(j=1; j<=i; j++)
            {
                if(arr[i] % j == 0)
                {
                    take[n] = j;
                    n++;
                }
            }
            n=0;
            for(int m=0; m<i; m++)
            {
                for(n=0; n<sizeof(take)/sizeof(take[0]); n++)
                {
                    if(arr[m] == take[n])
                        count++;
                }

            }
            cout<<count<<" ";
            count = 0;
            take[]=null;
        }
    }
}

