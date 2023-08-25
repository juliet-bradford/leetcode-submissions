class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        uint n = matrix.size(), m = matrix[0].size();
        int low = 0, high = n - 1, mid, row;

        //if (n == 1 && m == 1) return target == matrix[0][0];
        
        // binary search for right row

        while (low <= high) {
            mid = low + ((high - low) / 2);
            if (matrix[mid][0] == target) return true;
            else if (matrix[mid][0] > target) high = mid - 1; 
            else if (mid != n - 1 && target < matrix[mid + 1][0]) break;
            else low = mid + 1;
        }

        row = mid; low = 0; high = m - 1;
        while (low <= high) {
            mid = low + ((high - low) / 2);
            if (matrix[row][mid] == target) return true;
            else if (matrix[row][mid] > target) high = mid - 1;
            else low = mid + 1;
        }

        return false;
    }
};
