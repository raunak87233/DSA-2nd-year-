//https://leetcode.com/problems/roman-to-integer/submissions/896665213/




class Solution {
public:
            int romanToInt(string s) {
        map<char , int> roman{
            {'I' , 1},{'V' , 5},{'X' , 10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int num{0};
        for(size_t i{0}; i< s.length(); ++i){
             if(roman[s[i]] < roman [s[i+1]]){
                num += (roman[s[i+1]] - roman[s[i]]);
                ++i;
                }   
             else
              num += roman[s[i]];
        }
        return num;
    }
        
};
