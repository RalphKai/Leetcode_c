int removeDuplicates(int* nums, int numsSize){
    if (numsSize < 2) return numsSize;
    int index = 0;
    int moveIndex;
    
    for (moveIndex = 1; moveIndex < numsSize; moveIndex++){
        if (nums[moveIndex] != nums[index]){
            index += 1;
            nums[index] = nums[moveIndex];
        }
    }
    return index+1;
}