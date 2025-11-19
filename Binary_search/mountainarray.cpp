#include <iostream>
#include <vector>
using namespace std;

// ----------------------------------------------------------------------
// Function : peakIndexInMountainArray
// Purpose  : Find the index of the PEAK element in a mountain array.
//            A mountain array strictly increases, reaches a peak,
//            and then strictly decreases.
// Time Complexity  : O(log n)  → binary search halves the search range
// Space Complexity : O(1)      → uses constant extra memory
// ----------------------------------------------------------------------
int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    while (start < end) {
        // mid calculation avoids overflow
        int mid = start + (end - start) / 2;

        // If value increases after mid, peak is on the right side
        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        }
        // Otherwise, the peak is on the left (including mid)
        else {
            end = mid;
        }
    }

    // start == end → this is the peak index
    return start;
}


