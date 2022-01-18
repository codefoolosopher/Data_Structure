#include <stdio.h>
#include <stdlib.h>
/*
    Escape condition: 1) search success, 2) search failure
*/
int BSearchRecursive(int arr[], int first, int last, int target)
{
    int mid;
    if (first > last)
        return (-1); // exit with search failure

    mid = (first + last) / 2;
    if (arr[mid] == target)
        return mid; // exti with search success
    else if (target < arr[mid])
        return BSearchRecursive(arr, first, (mid - 1), target); // remove the right side of mid recursively
    else // target > arr[mid]
        return BSearchRecursive(arr, (mid + 1), last, target); // remove the left side of mid recursively
}

void DisplaySearchResult(int idx_result)
{
    if (idx_result == -1)
        printf("Search failure! \n");
    else 
        printf("Index containg the target: %d\n", idx_result);
}

int main(void)
{
    int arr[] = {1, 3, 5, 7, 9};
    int idx;
    int t_value; // target value

    // verification #1
    printf("Enter the value you are searching for: ");
    scanf("%d", &t_value);
    idx = BSearchRecursive(arr, 0, (sizeof(arr) / sizeof(int)) - 1, t_value);
    // Display the result
    DisplaySearchResult(idx);


    // verification #2
    printf("Enter the value you are searching for: ");
    scanf("%d", &t_value);
    idx = BSearchRecursive(arr, 0, sizeof(arr)/sizeof(int) - 1, t_value);
    DisplaySearchResult(idx);

    return EXIT_SUCCESS;
}