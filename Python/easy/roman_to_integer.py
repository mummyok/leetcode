# Method 1
class Solution:
    def romanToInt(self, s: str) -> int:
        value_map = { 'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000 }
        output = 0
        for i in range(len(s)):
            current = value_map[s[i]]
            if (i < len(s) - 1) and current < value_map[s[i+1]]:
                output -= current
            else:
                output += current
        return output

# Method 2
class Solution:
    def romanToInt(self, s: str) -> int:
        roman_dict = {
            "I":1,
            "V":5,
            "X":10,
            "L":50,
            "C":100,
            "D":500,
            "M":1000
        }
        solution_int = 0
        if "IV" in s:
            s = s.replace("IV","")
            solution_int += 4
        if "IX" in s:
            s = s.replace("IX","")
            solution_int += 9
        if "XL" in s:
            s = s.replace("XL","")
            solution_int += 40
        if "XC" in s:
            s = s.replace("XC","")
            solution_int += 90
        if "CD" in s:
            s = s.replace("CD","")
            solution_int += 400
        if "CM" in s:
            s = s.replace("CM","")
            solution_int += 900
        for i in s:
            solution_int += roman_dict[i]
        return solution_int
