int removeDuplicates(int* nums, int numsSize) {
    int i_idx = 0, ans_size = 0;

    if (numsSize == 0) return ans_size;

    for (int t_idx = 1; t_idx < numsSize; t_idx++) {
        if (nums[i_idx] == nums[t_idx]) {
            continue;
        } else {
            nums[++i_idx] = nums[t_idx];
            ans_size++;
        }
    }

    return ans_size + 1;
}
