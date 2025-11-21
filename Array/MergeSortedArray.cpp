#include <iostream>
using namespace std;
int main() {
    int arr1[4] = {1,3,5,7};
    int n =4;
   int arr2[6] = {2,4,6,8,10,12};
   int arr[20];
  int m = 6;
  int i=0, j=0, k=0;
   while(i<n && j< m){
       if(arr1[i] > arr2[j]){
           arr[k++] = arr2[j++];
       }else{
           arr[k++] = arr1[i++];
       }
   }
   while(i < n){
       arr[k++] = arr1[i++];
   }
  while(j < m){
       arr[k++] = arr2[j++];
   }
    for(int i=0; i<10; i++){
        cout<< arr[i] << endl;
    }
  
    return 0;
}