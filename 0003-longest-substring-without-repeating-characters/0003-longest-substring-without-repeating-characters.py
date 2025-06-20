class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        letterSet = set()

        l = 0
        result = 0
        for r in range(len(s)):
            while s[r] in letterSet:
                letterSet.remove(s[l])
                l += 1
            
            letterSet.add(s[r])
            result = max(result, r - l + 1)
        
        return result