//https://leetcode.com/submissions/detail/892532813/




class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int m = matrix.size();
        if (m == 0) return result;
        int n = matrix[0].size();
        if (n == 0) return result;
        
        int top = 0, bottom = m - 1, left = 0, right = n - 1;
        while (true) {
            for (int j = left; j <= right; j++) result.push_back(matrix[top][j]);
            if (++top > bottom) break;
            
            for (int i = top; i <= bottom; i++) result.push_back(matrix[i][right]);
            if (--right < left) break;
            
            for (int j = right; j >= left; j--) result.push_back(matrix[bottom][j]);
            if (--bottom < top) break;
            
            for (int i = bottom; i >= top; i--) result.push_back(matrix[i][left]);
            if (++left > right) break;
        }
        return result;
    }
};
