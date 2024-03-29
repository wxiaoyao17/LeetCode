/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int i, j;
    int *result = (int *)malloc(sizeof(int) * 2);

    for (i = 0; i < numsSize - 1; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
            }
        }
    }
    return result;
}
