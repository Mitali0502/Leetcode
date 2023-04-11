int arrayPairSum(int* nums, int numsSize) {
    // sort the array in non-decreasing order
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] > nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    // compute the sum of every other element starting from the first
    int sum = 0;
    for (int i = 0; i < numsSize; i += 2) {
        sum += nums[i];
    }
    return sum;
}
