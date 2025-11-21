#include <iostream>
using namespace std;
int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 3;
    int arr1[7];
    for(int i=0; i<n; i++){
        arr1[(i+3)%7] = arr[i];
    }
    for(int i=0; i<7; i++){
        cout<< arr1[i] << endl;
    }
  
    return 0;
}
