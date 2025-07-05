class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        
        left = 0
        m  = len(matrix)
        n  = len(matrix[0])
        right = (m * n) - 1

        while left <= right:
            mid_index = left + (right - left) // 2
            row = mid_index // n 
            col = mid_index % n
            mid = matrix[row][col]

            if mid > target:
                right = mid_index - 1
            elif mid < target:
                left = mid_index + 1
            else:
                return True
        
        return False
