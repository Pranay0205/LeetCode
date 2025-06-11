class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numset = set(nums)
        streak = 0

        for n in numset:
            if (n - 1) not in numset:
                length = 0
                while (n + length) in numset:
                    length += 1
                
                streak = max(length, streak)

        return streak
