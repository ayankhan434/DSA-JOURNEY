#include <iostream>
using namespace std;
int main()
{
    int arr[3][4] = {{1, 2, 3, 3}, {4, 5, 6, 6}, {7, 8, 9, 9}};
    int sum=0;
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 3; i++){
            cout << arr[i][j] << " ";
            sum +=arr[i][j];
        }
        cout<<endl;
    }
    cout<<sum;
    
    return 0;
}