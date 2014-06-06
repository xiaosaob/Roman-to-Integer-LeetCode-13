// Given a roman numeral, convert it to an integer.

// Input is guaranteed to be within the range from 1 to 3999.

class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        for(int i = 0; i < s.size(); ++i) {
            int curVal = getVal(s[i]);
            if(i+1 < s.size() && curVal < getVal(s[i+1])) {
                curVal *= -1;
            }
            res += curVal;
        }
        return res;
    }
    
    int getVal(char c) {
        if(c == 'I') return 1;
        else if(c == 'V') return 5;
        else if(c == 'X') return 10;
        else if(c == 'L') return 50;
        else if(c == 'C') return 100;
        else if(c == 'D') return 500;
        else if(c == 'M') return 1000;
        else return 0;
    }
};
