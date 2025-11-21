#include <iostream>
using namespace std;
int main() {
    int arr[4] = {0,3,0,7};
    int n = 4, i=0;
    for(int j=0; j<n; j++){
        if(arr[j] !=0){
            swap(arr[i], arr[j]);
            i++;
        }
    }
    for(int i=0; i<4; i++){
        cout<< arr[i] << endl;
    }
  
    return 0;
}