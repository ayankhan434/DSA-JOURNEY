#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 3, 5, 6, 54};
    int n = sizeof(arr) / sizeof(int);

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}