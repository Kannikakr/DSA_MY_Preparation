// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    // cout << "Try";
    int arr[7] = {9,6,3,4,5,6,7};
    int n =7;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i; j++){
    //         if(arr[j+1] < arr[j]){
    //             swap(arr[j+1], arr[j]);
    //         }
    //     }
    // }
    
    // foroptimisation use swapped bool variable. if in 3rd loop of j already sorted and has not done any swap then break tthe loop to minimise the complexity of time 
     for(int i=0; i<n; i++){
        bool swapped = false;
        for(int j=0; j<n-i; j++){
            if(arr[j+1] < arr[j]){
                swap(arr[j+1], arr[j]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
    for(int i=0; i<n; i++){
        cout<< arr[i] << endl;
    }
  
    return 0;
}