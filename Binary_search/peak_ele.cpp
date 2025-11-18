#include <iostream>
#include <vector>
using namespace std;

// ----------------------------------------------------------------------
// Function : findPeakElement
// Purpose  : Return the index of any PEAK element in the array.
//            A peak is an element that is greater than its neighbors.
// Time Complexity  : O(log n)  → binary search reduces search space by half
// Space Complexity : O(1)      → uses constant memory
// ----------------------------------------------------------------------
int findPeakElement(vector<int>& nums) {
    int start = 0;
    int end = nums.size() - 1;

    while (start < end) {
        // mid calculation avoids integer overflow
        int mid = start + (end - start) / 2;

        // If mid element is smaller than its next element,
        // then the peak MUST be in the right half.
        if (nums[mid] < nums[mid + 1]) {
            start = mid + 1;
        }
        // Otherwise, the peak is in the left half (or mid itself).
        else {
            end = mid;
        }
    }

    // start == end → peak index found
    return start;
}

