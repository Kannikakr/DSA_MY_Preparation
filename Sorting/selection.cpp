#include <iostream>
using namespace std;

// ----------------------------------------------------------------------
// Function : Selectionsort
// Purpose  : Sort an array in ascending order using Selection Sort.
//
// Technique       : In each iteration, find the minimum element from the
//                    unsorted part and swap it with the first unsorted index.
//
// Time Complexity : O(n²)
// Space Complexity: O(1)   → in-place sorting
//
// Example:
//    Input  : [5, 2, 4, 1]
//    Output : [1, 2, 4, 5]
// ----------------------------------------------------------------------
void Selectionsort(int arr[], int n) {

    // Outer loop → selects each index where the minimum will be placed
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        // Inner loop → find the minimum element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap only after finding the correct minimum element
        swap(arr[i], arr[minIndex]);
    }
}
