#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {4, 5, 2, 54, 566, 54};

    sort(v.begin(), v.end());

    for (int ele : v)
        cout << ele << " ";
    cout << endl;
    reverse(v.begin(), v.end());
    for (int ele : v)
        cout << ele << " ";
}