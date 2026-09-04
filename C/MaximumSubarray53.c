int maxSubArray(int* nums, int numsSize) {
    int currentsum=nums[0];
    int maxsum=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        if(currentsum+nums[i]>nums[i])
        {
            currentsum+=nums[i];
        }
        else
        {
            currentsum=nums[i];
        }
        if(currentsum>maxsum)
        {
            maxsum=currentsum;
        }
    }
    return maxsum;
    
}
//kadane's algorithm
