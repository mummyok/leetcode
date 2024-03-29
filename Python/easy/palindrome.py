# Description:
"""
Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:

Input: 121
Output: true
Example 2:

Input: -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
"""

# Method 1
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x >= 0:
            arr = []
            while x:
                arr.append(x%10)
                x //= 10
            return arr == arr[::-1]
        return False

# Method 2
return x==int(str(abs(x))[::-1])
