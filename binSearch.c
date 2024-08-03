#include <stdio.h>
int binSearch(int arr[], int size, int target)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid + 1; // it return actual pos of target
        }
        else if (arr[mid] < target)
        {
            low = mid + 1; // target is greater it must be in right side in sorted arr so low starts form mid+1
        }
        else if (arr[mid] > target)
        {
            high = mid - 1; // target is smaller so it must be in left half so starting that is low remains same and we have to set for high = mid -1 ;
        }
    }
    return -1;
}
int main()
{
    int nums[] = {2, 4, 5, 6, 7, 9, 10};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 10;
    int res = binSearch(nums, size, target);
    // printf("%d\n",res);
    if (res != -1)
    {
        printf(" %d is the pos for target %d", res, target);
    }
    else
    {
        printf("The element you're trying to search doesn't exist");
    }
    return 0;
}