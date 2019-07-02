#define max(a, b) a > b ? a : b

int maxSubArray(int* nums, int n){
    int sum = nums[0], answer = nums[0];
    for(int i=1; i<n; i++){
        sum += nums[i];
        if(sum < nums[i]) sum = nums[i];
        answer = max(answer, sum);
    }
    return answer;
}
