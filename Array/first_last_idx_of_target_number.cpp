#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 6, 7, 7, 7, 7, 8, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    int first_idx = -1;
    int last_idx = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            first_idx = i;
            break;
        }
        else
            -1;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == target)
        {
            last_idx = i;
            break;
        }
        else
            -1;
    }

    cout << first_idx << endl;
    cout << last_idx;

    return 0;
}