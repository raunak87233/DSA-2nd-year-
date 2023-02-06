//https://leetcode.com/submissions/detail/892575090/




class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> prefix_sum(words.size(), 0);
        vector<int> vowels = {'a', 'e', 'i', 'o', 'u'};
        for (int i = 0; i < words.size(); i++) {
            if (find(vowels.begin(), vowels.end(), words[i][0]) != vowels.end()
                && find(vowels.begin(), vowels.end(), words[i][words[i].size() - 1]) != vowels.end()) {
                prefix_sum[i] = 1;
            }
        }
        for (int i = 1; i < words.size(); i++) {
            prefix_sum[i] += prefix_sum[i - 1];
        }
        vector<int> result;
        for (auto query : queries) {
            int left = query[0];
            int right = query[1];
            int count = prefix_sum[right];
            if (left > 0) {
                count -= prefix_sum[left - 1];
            }
            result.push_back(count);
        }
        return result;
    }
};
