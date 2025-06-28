class Solution:
    def isValid(self, s: str) -> bool:
        brackets_map = {
            ")": "(",
            "}": "{",
            "]": "["
        }

        stack = []
        for bracket in s:
            if bracket in brackets_map:
                if len(stack) > 0 and brackets_map[bracket] == stack[-1]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(bracket)

                
        return len(stack) == 0


