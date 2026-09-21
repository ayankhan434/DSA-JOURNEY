#include <iostream>
#include <vector>
using namespace std;

/* void change(vector<int> v)
{ /// pass by value
    v[2] = 99;
}
 */
void change(vector<int>& v)
{
    v[2] = 99;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 76, 98, 33};
    change(v);
    cout << v[2] << endl;
}