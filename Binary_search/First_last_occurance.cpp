#include <iostream>
using namespace std;

// --------------------------------------------------------------
// Function: firstOccurrence
// Purpose : Find the FIRST index of 'key' in a sorted array.
// Time Complexity  : O(log n)  → binary search halves the search space
// Space Complexity : O(1)      → uses constant extra memory
// --------------------------------------------------------------
int firstOccurrence(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            result = mid;      // key found → store index
            high = mid - 1;    // go left to find earlier occurrence
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return result;
}

// --------------------------------------------------------------
// Function: lastOccurrence
// Purpose : Find the LAST index of 'key' in a sorted array.
// Time Complexity  : O(log n)  → same as firstOccurrence
// Space Complexity : O(1)      → constant space
// --------------------------------------------------------------
int lastOccurrence(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            result = mid;      // key found → store index
            low = mid + 1;     // go right to find later occurrence
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 4, 4, 4, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 4;

    int first = firstOccurrence(arr, n, key);
    int last = lastOccurrence(arr, n, key);

    cout << "First Occurrence of " << key << " = " << first << endl;
    cout << "Last Occurrence of " << key << " = " << last << endl;

    return 0;
}
