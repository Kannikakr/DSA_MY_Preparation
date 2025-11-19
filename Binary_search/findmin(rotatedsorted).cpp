#include <iostream>
#include <vector>
using namespace std;

// ----------------------------------------------------------------------
// Function : findMin
// Purpose  : Find the minimum element in a rotated sorted array.
//            Example: [4,5,6,7,0,1,2] → minimum = 0
//
// Technique       : Binary Search
// Why it works    : The rotation point is exactly where the minimum lies.
//                    We compare nums[mid] with nums[end] to decide which
//                    half contains the minimum.
// 
// Time Complexity : O(log n)  → search space is halved each time
// Space Complexity: O(1)       → constant extra space
// ----------------------------------------------------------------------
int findMin(vector<int>& nums) {
    int start = 0;
    int end = nums.size() - 1;

    while (start < end) {
        // mid calculation avoids overflow
        int mid = start + (end - start) / 2;

        // --------------------------------------------------------------
        // Case 1: nums[mid] > nums[end]
        // The minimum is in the RIGHT half (excluding mid),
        // because mid is part of the rotated larger segment.
        // --------------------------------------------------------------
        if (nums[mid] > nums[end]) {
            start = mid + 1;
        }
        // --------------------------------------------------------------
        // Case 2: nums[mid] <= nums[end]
        // The minimum is in the LEFT half (including mid),
        // because this part is already sorted or contains the pivot.
        // --------------------------------------------------------------
        else {
            end = mid;
        }
    }

    // start == end → position of the minimum element
    return nums[start];
}
