class Solution{
public:
	int lengthOfLongestSubString(string s){
		map<char, int> dict;
		int ans = 0;
		for(int i = 0, j = 0; i != s.length(); ++i){
			map<char, int>::iterator it = dict.find(s[i]);
			if(dict.end() != it){
				if(j > dict[s[i]]){
					ans = max(ans, i - j + 1);
				}
				j = max(j, dict[s[i]] + 1);
				dict[s[i]] = i;
			}
			else{
				dict.insert(pair<char, int>(s[i], i));
				ans = max(ans, i - j + 1);
			}
		}
		return ans;
	}
};
