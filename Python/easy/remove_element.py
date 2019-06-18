# Method 1
class Solution:
    def removeElement(self, nums, val):
        """
        : List[int]
        : int
         -> int
        """
        
        for i in range(nums.count(val)):
            nums.remove(val)
        return len(nums)

# Method 2
class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        if len(nums) == 0: return 0
        l = 0
        for i in range(len(nums)):
            if nums[i] != val:
                nums[l] = nums[i]
                l += 1
        return l
