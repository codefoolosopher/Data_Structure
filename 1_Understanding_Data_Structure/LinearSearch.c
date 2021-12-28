#include <stdio.h>

/* Linear search algorithme */
int LSearch(int arr[], int len, int target)
{
    int i;
    for (i=0; i<len; i++)
    {
        if(arr[i] == target)
            return i;
    }
    return -1; // no found
}

int main(void)
{
    int arr[] = {3, 5, 2, 4, 9};
    int idx; // ranges from 0 to 4

    // verification 1
    idx = LSearch(arr, sizeof(arr)/sizeof(int), 4);
    if (idx == -1)
        printf("Search failure!\n");
    else
        printf("Index storing the target: %d\n", idx);
    // verification 2
    idx=LSearch(arr, sizeof(arr)/sizeof(int), 7);
    if (idx == -1)
        printf("Search failure!\n");
    else
        printf("Index stroing the target: %d\n", idx);

    return 0; 
}