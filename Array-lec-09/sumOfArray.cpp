#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 3, 2, 3, 4, 5, 6, 65, 65, 4};

    int n = sizeof(arr) / sizeof(int);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    cout << sum;
    return 0;
}