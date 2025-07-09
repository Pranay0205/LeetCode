class Solution:
    def minChanges(self, s: str) -> int:
        change_count = 0

        for i in range(0, len(s), 2):
            if s[i] != s[i + 1]:
                change_count += 1
        
        return change_count