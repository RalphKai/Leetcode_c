int removeElement(int* nums, int numsSize, int val){
    if (numsSize == 0) return 0;
    int index = 0;
    int moveIndex;
    for (moveIndex = 0; moveIndex < numsSize; moveIndex++){
        if (nums[moveIndex] != val){
            nums[index] = nums[moveIndex];
            index++;
        }
    }
    return index;
}