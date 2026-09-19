#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> arr(5, 9);
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }

    arr.push_back(15);
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
}