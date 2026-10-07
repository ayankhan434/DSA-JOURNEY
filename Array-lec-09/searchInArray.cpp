#include <iostream>
using namespace std;
int main()
{

    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 87};

    int n = sizeof(arr) / sizeof(int);

    int find = 87;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == find)
        {
            cout << "element foind";
            break;
        }
    }

    return 0;
}