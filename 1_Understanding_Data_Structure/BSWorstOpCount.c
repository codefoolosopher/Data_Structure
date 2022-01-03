#include <stdio.h>

// To apply a binary search algorithm, data should be in a sequantial order,
// which means that it needs ascending/descending sorting beforehand.
int BSearch(int arr[], int len, int target)
{
    int first = 0;
    int last = len - 1;
    int mid;
    int opCount = 0; // to count the number of calculation to get Big-O

    while (first <= last)
    {
        mid = (first + last) / 2;
        if (target == arr[mid])
            return mid;
        else
        {
            if (target < arr[mid])
                last = mid - 1;
            else // target > arr[mid]
                first = mid + 1;
        }
        opCount++;
    }
    printf("The number of operation: %d\n", opCount);
    return -1; // means search failure
}

int main(void)
{
    int arr1[500] = {0, };
    int arr2[5000] = {0, };
    int arr3[50000] = {0, };
    int idx;

    // Verification #1(Data size: 500)
    idx = BSearch(arr1, sizeof(arr1)/sizeof(int), 1);
    if (idx == -1)
        printf("Search Failure!\n");
    else
        printf("Index containing the target: %d\n", idx);

    // Verification #2(Data Size: 5000)
    idx = BSearch(arr2, sizeof(arr2)/sizeof(int), 2);
    if (idx == -1)
        printf("Search Failure!\n");
    else
        printf("Index containing the target: %d\n", idx);


    // Verification #3(Data Size: 50000)
    idx = BSearch(arr3, sizeof(arr3)/sizeof(int), 3);
    if (idx == -1)
        printf("Search Failure!\n");
    else
        printf("Index containing the target: %d\n", idx);

    return 0;
}