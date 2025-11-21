#include <iostream>
using namespace std;
int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int n =7;
    for(int i=0, j= n-1; i<=j; i++, j--){
        swap(arr[i], arr[j]);
    }
  
    for(int i=0; i<n; i++){
        cout<< arr[i] << endl;
    }
  
    return 0;
}