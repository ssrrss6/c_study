#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    returnSize = (int*)malloc(8);

    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("[%d,%d]", i, j);
                *returnSize = i;
                *(returnSize + 1) = j;
            }
        }
    }

}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int target = 9;
    int* returnSize = NULL;

    twoSum(nums, numsSize, target, returnSize);

}