#include <iostream>
#include <limits.h>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, -345, 3, 4, 0};

    int n = sizeof(arr) / sizeof(int);

    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min;

    return 0;
}