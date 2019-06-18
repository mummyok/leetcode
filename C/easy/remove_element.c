/**************************************************************Method 1**************************************************************/
void swap(int *a, int *b){
    
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

int removeElement(int* nums, int numsSize, int val){
    
    int i = 0;
    int end = numsSize;
    
    while(i < end){
        
        if(nums[i] == val){
        
            swap(&nums[i], &nums[end - 1]);
            end--;    
        }
            
     else{i++;}        
        
    }
    
    return end;

}
/**************************************************************Method 1**************************************************************/

/**************************************************************Method 2**************************************************************/
int removeElement(int *nums, int numsSize, int val)
{
    int i, j;
    i = 0, j = 0;
    while (i < numsSize)
    {
        int k = 0;
        if (nums[i] == val)
        {
            while (1)
            {
                if (j < numsSize)
                {
                    if (nums[j] == val)
                    {
                        j++;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    k = 1;
                    break;
                }
            }
            if (k)
            {
                break;
            }
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
        i++;
        j++;
    }
    return i;
}
/**************************************************************Method 2**************************************************************/
