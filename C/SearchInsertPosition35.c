int searchInsert(int* nums, int numsSize, int target) {
    int mid=0;
    int left=0;
    int right=numsSize-1;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[mid]<target)
        {
            left+=1;
        }
        else
        {
            right-=1;
        }
    }
    return left;
    
}
