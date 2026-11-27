#include <iostream>
#include <array>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 3, 5, 6, 5, 4, 4, 99};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool vis[n] = {false};
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (vis[arr[i]] == false)
        {
            vis[arr[i]] = true;
            count++;
            cout << arr[i] << " " << endl;
        }
    }
    cout << "total unique elem : " << count;
    return 0;
}