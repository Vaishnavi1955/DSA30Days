#include<iostream>
using namespace std;

pair<int, int> twoSum(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                return {i, j}; // return a pair
            }
        }
    }
    return {-1, -1}; // not found
}

int main() {
    int arr[] = {2, 7, 15, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    pair<int, int> result = twoSum(arr, n, target);
    if (result.first != -1)
        cout << "Two indices: " << result.first << " and " << result.second << endl;
    else
        cout << "No pair found\n";
}

