int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return index if found or the element arr[i]
        } 
    }
    return -1; // Return -1 if not found
}

/*Logic

Start from the first element of the array.
Compare each element sequentially with the target value (key).
If a match is found → return the index; if the end is reached → element not found.

Complexity 

Best Case: O(1) → when the element is found at the first position.
Worst Case: O(n) → when the element is at the end or not present at all.
Space Complexity: O(1) → uses only a constant amount of extra memory. 

1. What is Linear Search?
Linear Search is a simple searching algorithm that checks each element in a list sequentially 
until the target element is found or the list ends.

2 How does Linear Search work?

It starts from the first element, compares each element with the key, and stops when a match 
is found or the end is reached.

3 What is the time complexity of Linear Search?
refer above.

4 What is the space complexity of Linear Search?
O(1) because it uses only a few extra variables regardless of input size.

5 What are the advantages of Linear Search?
Works on unsorted data.
Simple to implement.
Useful for small datasets.

6 What are the disadvantages of Linear Search?
Inefficient for large datasets.
Requires more comparisons compared to Binary Search.
Time grows linearly with input size.

7 What is the difference between Linear Search and Binary Search?
Feature	     Linear Search	                                Binary Search
Data Type	 Works on any data (sorted or unsorted)	        Works only on sorted data
Complexity	 O(n)                                          	O(log n)
Approach	 Sequential	                                    Divide and conquer

8 Can Linear Search handle duplicate elements?
Yes, but it returns the first occurrence of the element unless modified to find all occurrences.
*/