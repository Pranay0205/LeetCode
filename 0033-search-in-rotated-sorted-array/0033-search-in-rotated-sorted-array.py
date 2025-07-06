class Solution:
    def search(self, nums: List[int], target: int) -> int:
        
        l, r = 0, len(nums) - 1

        while l <= r:

            mid_idx = (l + r) // 2
            mid_elm = nums[mid_idx]

            if target == mid_elm:
                return mid_idx

            if nums[l] <= mid_elm:
                if mid_elm < target or nums[l] > target:
                    l = mid_idx + 1
                else:
                    r = mid_idx - 1
            else:
                if mid_elm > target or nums[r] < target:
                    r = mid_idx - 1
                else:
                    l = mid_idx + 1
            
        return -1