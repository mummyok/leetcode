# Method 1
class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        if len(s.strip().split(" ")) >= 1:
            return len(s.strip().split(" ")[len(s.strip().split(" ")) - 1])
        return 0


# Method 2
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        
        lastInd = len(s) - 1
        
        whiteSpaces = 0                                   ##Pointer that counts the white spaces. 
        while lastInd > 0 and s[ lastInd ] == ' ':
            lastInd -= 1
            whiteSpaces += 1
        
        while lastInd >= 0 and s[ lastInd ] != ' ':       ##Pointer that counts until the end or til the next white space 
            lastInd -= 1
            
        return len(s) - lastInd - whiteSpaces - 1
