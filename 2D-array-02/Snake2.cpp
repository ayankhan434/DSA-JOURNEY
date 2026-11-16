#include <iostream>
using namespace std;
int main()
{
    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {8, 9, 10}, {11, 12, 13}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int j = 0; j < 3; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 3; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = 0; i < 4; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}