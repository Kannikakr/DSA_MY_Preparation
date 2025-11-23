class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0;
        int row = matrix.size();
        int col = matrix[0].size();
        int end = row*col -1;
        int mid = start + (end-start)/2;
        while(start<=end){
            int midele = matrix[mid/col][mid%col];
            if(midele == target) return true;
            if ( midele > target) end = mid-1;
            else  start = mid +1;
            mid = start + (end-start)/2;
        }
        return false;
    }
};