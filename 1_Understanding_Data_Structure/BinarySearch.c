#include <stdio.h>

// compare this function with "RecursiveBinarySeach.c"
int BSearch(int arr[], int len, int target)
{
    int first = 0;
    int last = len - 1;
    int mid;

    // Loop for binary search
    while (first <= last)
    {
        mid = (first + last) / 2;
        if (target == arr[mid])
        {
            return mid;        
        }
            
        else
        {
            if (target < arr[mid])
                last = mid - 1; // throw away the value already used as mid
            else // targer > arr
                first = mid + 1;
        }
    }
    return -1; // search failure
}

int main(void)
{
    int arr[] = {1, 3, 5, 7, 9};
    int idx;

    // Verification #1
    idx = BSearch(arr, sizeof(arr)/sizeof(int), 7);
    if (idx == -1) // for lazy evaluation
        printf("Search Failiure!\n");
    else
        printf("Index storing the target: %d\n", idx);

    // Verification #2
    idx = BSearch(arr, sizeof(arr)/sizeof(int), 4);
    if (idx == -1)
        printf("Search Failiure!\n");
    else
        printf("Index storing the target: %d\n", idx);

    return 0;
}