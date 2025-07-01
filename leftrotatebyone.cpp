#include <iostream>
#include <vector>
using namespace std;

void leftrotatebyone(vector<int>& arr, int n) {
    int temp = arr[0];
    for(int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    leftrotatebyone(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

