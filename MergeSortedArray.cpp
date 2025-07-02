#include <iostream>
using namespace std;

class Solution {
public:
    void merge(int nums1[], int m, int nums2[], int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};

int main() {
    const int m = 5;
    const int n = 3;
    int nums1[m + n] = {2, 3, 5, 6, 7};  // First array with enough space at the end
    int nums2[n] = {1, 4, 8};

    Solution sol;
    sol.merge(nums1, m, nums2, n);

    // Print merged array
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}

