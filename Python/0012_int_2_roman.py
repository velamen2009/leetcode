class Solution(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        if num < 1 or num > 3999:
            return None
        ans = ""
        for i in range(3, -1, -1):
            n = num // (10 ** i)
            if n > 0:
                len = 10 ** i
                ans += self.oneRoman(len, n)
                num -= len * n
        return ans
    
    def oneRoman(self, len, n):
        rt = ""
        if 1000 == len:
            rt = self.fix(n, "", "", "M")
        elif 100 == len:
            rt = self.fix(n, "M", "D", "C")
        elif 10 == len:
            rt = self.fix(n, "C", "L", "X")
        else:
            rt = self.fix(n, "X", "V", "I")
        return rt
    
    def fix(self, n, high, mid, low):
        rt = ""
        if n <= 3:
            for i in range(n):
                rt += low
        elif n == 4:
            rt = low + mid
        elif n <= 8 and n >= 5:
            rt = mid
            for i in range(n - 5):
                rt += low
        else:
            rt = low + high
        return rt
