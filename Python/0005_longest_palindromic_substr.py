class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        if(len(s) > 1000 or len(s) <= 0):
            return None
        if(1 == len(s)):
            return s
        if(2 == len(s)):
            if s[0] == s[1]:
                return s
            else:
                return s[0]
        maxlen = 1
        rt = s[0]
        for m in range(1, len(s)):
            i = m - 1
            j = m + 1
            rt, maxlen = self.checkpalingdrome(i, j, s, rt, maxlen)
            
            i = m - 1
            j = m
            rt, maxlen = self.checkpalingdrome(i, j, s, rt, maxlen)
        return rt
        
    def checkpalingdrome(self, i, j, s, rt, maxlen):
        while(i >= 0 and j < len(s) and s[i] == s[j]):
            i -= 1
            j += 1
        if(maxlen < j - i - 1):
            maxlen = j - i - 1
            rt = s[i+1:j]
        return rt, maxlen
