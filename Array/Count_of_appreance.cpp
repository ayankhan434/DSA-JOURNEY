#include <iostream>
#include <array>
using namespace std;
int main()
{
    int arr[] = {2, 3, 4, 5, 5, 4, 3, 2, 2, 2, 2, 3, 4, 7, 8, 7, 989, 9, 9, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool vis[n] = {false};

    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false)
        {
            int count = 1;
            vis[i] = true;

            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    vis[j] = true;
                    count++;
                }
            }
            cout << arr[i] << "--->>" << count<<endl;
        }
        
    }

    return 0;
}