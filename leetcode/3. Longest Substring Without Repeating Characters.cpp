//https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/889326266/



class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        vector <int> k (256,-1);
        int i=-1;
        for(int j=0;j<s.length();j++){
            i =max(k[s[j]],i);
            ans =max(ans ,j-i);
            k[s[j]]=j;
        }
        return ans ;
    }
};
