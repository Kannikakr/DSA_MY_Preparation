bool solve(int arr[], int n){
    bool ans=0;
    if(n==1 || n==0) return true;
    if(arr[0] < arr[1]) {
        ans = solve(arr+1, n-1);
    }
    else {
        return false;
    }
    return ans;
}