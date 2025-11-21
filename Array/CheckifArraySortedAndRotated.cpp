#include <iostream>
using namespace std;
int main() {
    int arr[6] = {3,4,5,6,1,2};
    int n = 6; 
    int count = 0;
    
    for(int i=1; i<n; i++){
        if(arr[i-1] > arr[i]){
            count++;
        }
    }
    if(arr[n-1] > arr[0]) count ++;
    bool ans = (count<=1);
    cout << ans <<endl;
    // for(int i=0; i<7; i++){
    //     cout<< arr1[i] << endl;
    // }
  
    return 0;
}