class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:

        i = 0
        j = len(numbers) - 1

        while i < j:
            
            result = numbers[i] + numbers[j]

            if result < target:
                i += 1
            
            if result > target:
                j -= 1
            
            if result == target:
                return [i + 1, j + 1]
        
        return []
            