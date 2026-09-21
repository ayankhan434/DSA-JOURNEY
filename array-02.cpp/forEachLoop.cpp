#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v = {2, 3, 5, 8, 9};

    // for loop
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
        {
            v[i] *= 2;
        }
        else
        {
            v[i] *= v[i];
        }
    }
    cout << endl;

    // forEachLoop

    for (int ele : v)
    {
        cout << ele << " ";
    }
}