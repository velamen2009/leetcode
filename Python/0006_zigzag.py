class Solution(object):
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        if len(s) <= 1 or numRows <= 1:
            return s
        rt = str()
        for i in range(numRows):
            if i < len(s):
                rt += s[i]
            index = i
            while index < len(s):
                index0 = index + 2 * numRows - 2 - 2 * i
                index1 = index0 + 2 * i
                if index != index0 and index0 < len(s):
                    rt += s[index0]
                if index0 != index1 and index1 < len(s):
                    rt += s[index1]
                index = index1
        return rt
