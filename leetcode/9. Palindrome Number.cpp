//https://leetcode.com/problems/palindrome-number/submissions/891403297/



class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x < 10) return true;

        string a = to_string(x);
        int left = 0, right = a.length() - 1;
        while (left <= right) {
            if (a[left++] != a[right--]) return false;
        }
        return true;
    }
};
