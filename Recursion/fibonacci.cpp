class Solution {
public:
    int fibb(int n){
        if(n==0 || n==1 )  return n;
        int ans = fibb(n-1) + fibb(n-2);
        return ans;
    }
    int fib(int n) {
        int ans = fibb(n);
        return ans;
    }
};