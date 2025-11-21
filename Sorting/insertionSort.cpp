// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    // cout << "Try";
    int arr[7] = {9, 5,3,4,5,6,7};
    int n =7;
    int temp;
  //insertion sort 
  for(int i=1; i<n-1; i++){
      temp = arr[i];
      int j = i+1;
      for(j = i-1; j>=0; j--){
          if(temp < arr[j]){
              arr[j+1] = arr[j];
          }
          else{
              break;
          }
      }
      arr[j+1] = temp;
  }
  
    for(int i=0; i<n; i++){
        cout<< arr[i] << endl;
    }
  
    return 0;
}