class Solution {
public:
    string convert(string s, int numRows) {
        if(s.length() <= 1 || numRows <= 1){ return s; }
        string rt = "";
        for(int i = 0; i < numRows; ++i){
            int index = i;
            if(index < s.length()){ rt += s[index]; }
            while(index < s.length()){
                int nextIndex0 = index + 2 * numRows - 2 - 2 * i;
                int nextIndex1 = nextIndex0 + 2 * i;
                if(index != nextIndex0 && nextIndex0 < s.length()){
                    rt += s[nextIndex0];
                }
                if(nextIndex0 != nextIndex1 && nextIndex1 < s.length()){
                    rt += s[nextIndex1];
                }
                index = nextIndex1;
            }
        }
        return rt;
    }
};
