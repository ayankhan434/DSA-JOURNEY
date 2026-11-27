#include <iostream>
using namespace std;
int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {1, 2, 3, 4}, {5, 6, 7, 8}};
    int row = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);

    int left_sum = 0;
    int right_sum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // cout << arr[i][j] << " ";

            if (i == j)
            {
                cout << arr[i][j] << " are the left diagonal elem";
                left_sum += arr[i][j];
            }
        }

        cout << endl;
    }

    cout << "right diagonal" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if ((i + j) == row - 1)
            {
                cout << "right diagonal are  " << arr[i][j] << "  " << endl;
                right_sum = right_sum + arr[i][j];
            }
        }
    }

    cout << "left sum is" << left_sum << endl;
    cout << "right sum is" << right_sum << endl;

    return 0;
}