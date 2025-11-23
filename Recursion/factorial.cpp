int fact(int n){
    if(n==0) return 1;
    int ans = fact(n-1) * n;
    return ans;
}