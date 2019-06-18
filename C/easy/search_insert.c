int searchInsert(int* nums, int numsSize, int target) {
    int i, flag = 0;    //flag is set if there are some numbers in nums smaller than target
    for(i = 0; i < numsSize; ++i)
    {
        if(nums[i] == target)
            return i;
        else if(nums[i] > target)
        {
            if(flag)
                return i;
            else
                return 0;
        }
        else
            flag = 1;
    }
    return i;
}
