//https://leetcode.com/submissions/detail/894596430/



class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        vector<vector<int>> ans;
        int sum = 0, j, k;

        for(int i = 0; i < size-2; i++){
            if( i > 0 && nums[i] == nums[i-1]){
                continue;
            }

            j = i + 1;
            k = size - 1;
            while(j < k){
                sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    vector<int> tmp;
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[j]);
                    tmp.push_back(nums[k]);
                    ans.push_back(tmp);
                }
                if(sum < 0){
                    j += 1;
                } else if (sum > 0){
                k -= 1;
                } else if(sum == 0){
                    j++;k--;
                    while(j < k && nums[j] == nums[j-1]){
                        j++;
                    }
                }
            }
        }

        return ans;
    }
};
