//https://leetcode.com/submissions/detail/894093975/



class Solution {
public:
    int jump(vector<int>& nums) {
        int len = nums.size() - 1, a = -1, b = 0, result = 0;
        for (int i = 0; b < len; i++) {
            if (i > a) result++, a = b;
            b = max(b, nums[i] + i);
        };
        return result;
        
    }
};
