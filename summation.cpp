#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

    int n;
    cin >> n;
    if (n <=100000)
    {
        int arr[n];
        int count = 0;
        double data = 0;

        for (int i = 0; i < n; i++)
        {
            count++;
            cin >> arr[i];
            if(arr[i] < 1 || arr[i] > 1000)
            {
                return 0;
            }
            data += (double) arr[i];
            double result = (data / count);
            printf("%.10f\n", result);
        }
    }

    return 0;
}
