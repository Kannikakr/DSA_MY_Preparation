// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int solve(int arr[], int n, int target){
   if(n==0) return -1;
   if(arr[0] == target) return target;
   int ans = solve(arr+1, n-1, target);
   return ans;
} 
int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int n = 7;
    int target=9;
    int ans = solve(arr, n, target);
cout << ans;
    return 0;
}