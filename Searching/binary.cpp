#include <iostream>
using namespace std;

// Function for Binary Search
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid; // Return index if found
        } 
        else if (arr[mid] < key) {
            low = mid + 1; // Search in right half
        } 
        else {
            high = mid - 1; // Search in left half
        }
    }

    return -1; // Return -1 if not found
}

/* 
Logic

1. Works only on a sorted array (ascending or descending order).
2. Repeatedly divides the search interval into two halves.
3. Compare the key with the middle element:
   - If equal → return index.
   - If smaller → search left half.
   - If larger → search right half.

Complexity

Best Case: O(1) → when the middle element is the key.
Worst Case: O(log n) → search space is halved each time.
Space Complexity: O(1) → uses only a constant amount of extra memory.

1. What is Binary Search?
Binary Search is an efficient algorithm to find an element in a sorted array 
by repeatedly dividing the search interval into halves.

2. How does Binary Search work?
It compares the key with the middle element and eliminates half of the search space
in each step until the key is found or the interval becomes empty.

3. What is the time complexity of Binary Search?
Best Case: O(1)
Worst Case: O(log n)
Average Case: O(log n)

4. What is the space complexity of Binary Search?
O(1) for the iterative version and O(log n) for the recursive version 
(due to call stack usage).

5. What are the advantages of Binary Search?
- Much faster than Linear Search for large datasets.
- Reduces comparisons using divide and conquer.
- Predictable logarithmic time growth.

6. What are the disadvantages of Binary Search?
- Works only on **sorted** arrays.
- Not suitable for frequently changing data.
- Sorting overhead may increase total cost.

7. What is the difference between Binary Search and Linear Search?
Feature	      Linear Search	                          Binary Search
Data Type	  Works on unsorted data	                Works only on sorted data
Complexity	  O(n)	                                    O(log n)
Approach	  Sequential	                            Divide and conquer
Speed	      Slower	                                Faster for large datasets

8. Can Binary Search handle duplicate elements?
Yes, but it returns **any one occurrence**.  
It can be modified to find **first** or **last occurrence** using small logic changes.
*/
