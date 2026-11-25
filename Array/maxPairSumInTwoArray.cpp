#include <iostream>
#include <limits.h>
using namespace std;
int main()
{

    int arr1[] = {2, 3, 4, 5};
    int arr2[] = {5, 3, 7, 9, 2, 122};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    cout << m<<endl;
    cout << n;
    cout << endl;
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] + arr2[j] >= max)
            {
                max = arr1[i] + arr2[j];
                // cout<<max;
            }
            else
            {
                // cout<<(arr1[i]+arr2[j]);
                // cout<<"is the  max ";
            } //
        }
    }
    cout << max;

    return 0;
}