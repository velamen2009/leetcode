class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        dict = {}
        ans, j = 0, 0
        for i in range(len(s)):
            if s[i] in dict:
                if j > dict[s[i]]:
                    ans = max(ans, i - j + 1)
                j = max(j, dict[s[i]] + 1)
                dict[s[i]] = i
            else:
                dict[s[i]] = i
                ans = max(ans, i - j + 1)
        return ans
