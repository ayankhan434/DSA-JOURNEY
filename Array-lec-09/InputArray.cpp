#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the array size : ";
    cin >> n;
    int arr[n];
    cout << "Enter tha array elements : ";
    // input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // output
    // print the number greater than 1

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 1)
            cout << arr[i] << " ";
    }
    return 0;
}
