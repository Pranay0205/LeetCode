class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        res = [0] * len(temperatures)
        stack = [] # stores pair of [temp, index]

        for i, t in enumerate(temperatures):
            while stack and t > stack[-1][0]:
                _, stack_ind = stack.pop()
                res[stack_ind] = (i - stack_ind)

            stack.append([t, i])
        return res
        