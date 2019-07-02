class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        if nums == []:
            return 0
        if len(nums) == 1:
            return nums[0]
        
        max_ = -float('inf') 
        sum_ = 0
        for i in nums:
            if i > (sum_+i):
                sum_ = i
            else:
                sum_ += i
            if sum_ > max_:
                max_ = sum_    
        return max_
