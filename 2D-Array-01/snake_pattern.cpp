#include <iostream>
using namespace std;
int main()
{
    int arr[3][4] = {{1, 2, 3, 3}, {4, 5, 6, 6}, {7, 8, 9, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        
        if (i % 2 == 0)
        {
        
            for (int j = 0; j < 4; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = 3; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
           
        }
    }

    return 0;
}