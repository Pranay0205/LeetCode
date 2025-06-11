class Solution:
    def isPalindrome(self, s: str) -> bool:
        new_s  = ""
        for letter in s:
            if letter.isalnum():
                new_s += letter.lower()
            
        reveresed_string = "".join(reversed(new_s)) 

        return new_s == reveresed_string
        