#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr(4, vector<int>(4, 0));
    // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // cout<< ans[0][0]<<endl;;


    int s=0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[i][j]=s;
            s++;
            
        }
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout << endl;
    }

}