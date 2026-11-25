#include <iostream>
using namespace std;

int main()
{
    int s = 1;
    int e = 5;

    int prime_count = 0;

    for (int i = s; i <= e; i++)
    {
        int count = 0;

        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            prime_count++;
        }
    }

    cout << prime_count;

    return 0;
}