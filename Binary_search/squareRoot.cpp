#include <iostream>
using namespace std;

// ----------------------------------------------------------------------
// Function : mySqrt
// Purpose  : Compute the integer square root of a number x.
//            Returns floor(sqrt(x)).
//
// Technique       : Binary Search
// Why it works    : For any number x, the square root lies between 0 and x.
//                    Using binary search, we find the largest integer "mid"
//                    such that mid*mid <= x.
//
// Time Complexity : O(log x)  → search space halves each step
// Space Complexity: O(1)      → constant extra space
// ----------------------------------------------------------------------
int mySqrt(int x) {
    // Handle small values directly
    if (x == 0) return 0;
    if (x == 1) return 1;

    long long start = 0;
    long long end = x;
    long long ans = 0;   // Store the best possible integer sqrt

    while (start <= end) {
        // mid calculation avoids overflow
        long long mid = start + (end - start) / 2;
        long long square = mid * mid;

        // --------------------------------------------------------------
        // Case 1: perfect square → answer found
        // --------------------------------------------------------------
        if (square == x) {
            return mid;
        }

        // --------------------------------------------------------------
        // Case 2: square is too large → move to left half
        // --------------------------------------------------------------
        if (square > x) {
            end = mid - 1;
        }
        // --------------------------------------------------------------
        // Case 3: square is small → mid is a potential answer,
        //          but we try to find a bigger valid one
        // --------------------------------------------------------------
        else {
            ans = mid;
            start = mid + 1;
        }
    }

    // Largest integer "mid" such that mid*mid <= x
    return ans;
}
