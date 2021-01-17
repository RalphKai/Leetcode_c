int searchInsert(int* nums, int numsSize, int target){
    int index = 0;
    for (index = 0; index < numsSize; index++){
        if (nums[index] - target >= 0)
            return index;
    }
    return index;
}