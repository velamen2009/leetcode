class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() > 1000 || s.length() == 0){ return ""; }
        if(s.length() == 1){ return s; }
        if(s.length() == 2){ return s[0] == s[1] ? s : s.substr(0, 1); }
        
        string rt = "";
        int maxlen = -1;
        for(int m = 1; m < s.length(); ++m){
            int i = m - 1, j = m + 1;
            while(i >= 0 && j < s.length() && s[i] == s[j]){
                --i;
                ++j;
            }
            if(maxlen < j - i - 1){
                maxlen = j - i - 1;
                rt = s.substr(i + 1, maxlen);
            } 
            i = m - 1;
            j = m;
            while(i >= 0 && j < s.length() && s[i] == s[j]){
                --i;
                ++j;
            }
             if(maxlen < j - i - 1){
                maxlen = j - i - 1;
                rt = s.substr(i + 1, maxlen);
            } 
        }
        return rt;
    }
};
