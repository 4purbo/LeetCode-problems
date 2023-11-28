/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdlib.h> // only import it if you are running this code on your own machine.

// BruteForce
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    *returnSize = 2;
    int *result = (int *)malloc(*returnSize * sizeof(int));
    for (int x_i = 0; x_i < numsSize; x_i++)
    {
        int x = nums[x_i];
        for (int y_i = x_i + 1; y_i < numsSize; y_i++)
        {
            int y = nums[y_i];
            if (x + y == target)
            {
                result[0] = x_i;
                result[1] = y_i;
                return result;
            }
        }
    }
    return NULL;
}