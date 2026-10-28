#include <iostream>
using namespace std;
int main()
{
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int arr[3][4] = {{111, 2, 3, 3}, {4, 51, 6, 6}, {7, 8, 9, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
            if ( i == 0)
            {
                sum1 += arr[i][j];
            }
            if (i == 1)
            {
                sum2 += arr[i][j];
            }
            if ( i == 2)
            {
                sum3 += arr[i][j];
            }
        }

        cout << endl;
    }
    if (sum1 > sum2 && sum1 > sum3)
    {
        cout << "sum1 is greater";
        
    }
    if(sum2>sum1 && sum2>sum3){
        cout<<"sum2 is greater";
    }
    if(sum3>sum1 && sum3>sum2){
        cout<<"sum3 is the greatest";
    }
    return 0;
}