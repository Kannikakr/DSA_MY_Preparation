// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int solve(int arr[], int n, int target, int start, int end){
   if(start>end) return -1;
   int mid = start+(end-start)/2;
   if(arr[mid] ==  target) return mid;
   if(arr[mid]>target){
       return solve(arr,n,target, start, mid-1);
   }
   else{
       return solve(arr, n, target, mid+1, end);
   }
} 
int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int n = 7;
    int target=9;
    int ans = solve(arr, n, target, 0, 6);
cout << ans;
    return 0;
}