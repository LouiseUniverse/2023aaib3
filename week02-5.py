class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        d = {}         
        for c in s:       #統計
            if c in d:
                d[c] = d[c] + 1
            else:
                d[c] = 1

        for c in t:       #檢查
            if c not in d:
                return False
            if d[c] == 0:
                return False
            else:
                d[c] = d[c] - 1
        
        return True