int solve(int arr[], int n){
  int sum = 0;
  if(n<=0) return 0;
  if(n==1) return arr[0];
  sum = arr[0] + solve(arr+1, n-1);
  return sum;
}