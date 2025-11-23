bool sort(int arr[], int size){
    if(size == 0|| size==1) return true;
    for(int i =0; i<size; i++){
       if(arr[i]> arr[i+1]){
        swap(arr[i], arr[i+1])
       } 
    }
    return sort(arr, n-1);
}