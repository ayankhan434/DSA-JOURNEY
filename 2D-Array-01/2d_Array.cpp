// 2d array intro    (matrix)
// its similar to a grid

// arr[row][col]

// input and output

// 2d-array actually arrray of 1d-arrays
#include <iostream>
using namespace std;
int main()
{
    int arr[3][4] = {{1, 2, 3, 3}, {4, 5, 6, 6}, {7, 8, 9, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
    
    return 0;
}