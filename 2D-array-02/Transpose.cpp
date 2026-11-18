#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr(3, vector<int>(3, 0));
    int l = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = l;
            l++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // swap(arr[i][j], arr[j][i]);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Transpose" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {

            swap(arr[i][j], arr[j][i]);
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl;
}
