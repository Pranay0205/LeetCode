class Solution:
    def findMin(self, nums: List[int]) -> int:


        l, r = 0, len(nums) - 1

        while l < r:

            if nums[l] <= nums[r]:
                return nums[l]

            mid_idx = (l + r) // 2

            mid_elm = nums[mid_idx]

            if mid_elm > nums[r]:
                l = mid_idx + 1
            else:
                r = mid_idx
        
        return nums[l]

        