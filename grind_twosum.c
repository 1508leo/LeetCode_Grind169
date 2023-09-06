#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

// The time complexity is O(n^2)
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *result;
    result = malloc(2 * sizeof(int));
    for(int i= 0; i < numsSize; i++)
    {
        for(int j = i + 1; j < numsSize; j++)
        {
            if(*(nums + i) + *(nums + j) != target)
                continue;
            else
            {
                *(result + 0) = i;
                *(result + 1) = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    return 0;
}

