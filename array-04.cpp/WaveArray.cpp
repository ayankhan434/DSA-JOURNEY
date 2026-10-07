#include <iostream>
#include <vector>
using namespace std;

void sortInWave(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i + 1 < n; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    sortInWave(arr);

    cout << "Wave Array: ";

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}