#include <stdio.h>
#include <stdlib.h>

/**
 * A brief description of function twoSum. 
 * @param int* nums - Input array.
 * @param int numsSize -  Size of Input array.
'* @param int target -  target sum 
'* @param int* returnSize -  hardcoded value 2. Used internally in leetcode
 * @return address of the array which contains the indices
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    *returnSize = 2; 
    int f_indx = 0;
    int s_indx = 0;
    int *element = malloc(2*sizeof(int));
    for(f_indx = 0; f_indx<numsSize; f_indx++){
        
        for(s_indx = f_indx+1; s_indx<numsSize; s_indx++){
            
            if( (nums[f_indx] + nums[s_indx] == target) ){
                printf("%d %d\n",f_indx,s_indx);
                element[0] = f_indx;
                element[1] = s_indx;
            }
        }
    }
    return element;
}

int main() {
    // Write C code here
    printf("Two Sum Problem in Leetcode\n\
    for more info ->\
    Link: https://leetcode.com/problems/two-sum/");
    int arr[] = {2,7,3,2}; //change the array value
    int target = 9; //target sum. User change value
    int ret_size = 2; //hardcoded value for leetcode.
    int *ret_arr = twoSum(arr,sizeof(arr)/sizeof(arr[0]),target,&ret_size);
    printf("Resultant indices\n");
    printf("%d %d\n",ret_arr[0],ret_arr[1]);

    return 0;
}