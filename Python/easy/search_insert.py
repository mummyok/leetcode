# Method 1
class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        if target > nums[-1]:
            return len(nums)
        
        cur_idx = 0
        while cur_idx < len(nums):
            if nums[cur_idx] >= target:
                return cur_idx
            cur_idx += 1

# Method 2
 def searchInsert(self, nums: List[int], target: int) -> int:
        
        # Base Cases: if target == 0 or target == len(nums) + 1
        if nums[0] > target: return 0
        if nums[len(nums)-1] < target: return len(nums)
        
        for i in range(len(nums)):
            if nums[i] == target:
                return i
            elif nums[i] < target and nums[i+1] > target:
                return i + 1
