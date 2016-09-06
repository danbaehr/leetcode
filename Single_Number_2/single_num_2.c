int singleNumber(int* nums, int numsSize) {
    int ans = 0;
    
    /* for each "column" in a 32-bit integer matrix */
    for (int i = 0; i < 32; i++) {
        int ones = 0;

        /* ones is the number of 1s in that column */
        for (int j = 0; j < numsSize; j++) {
            /* shift the int over to test for a 1 at 
             * the i bit position
             */
            ones += (nums[j] >> i) & 1;
        }
        
        ans |= (ones % 3) << i;
    }

    return ans;
}
