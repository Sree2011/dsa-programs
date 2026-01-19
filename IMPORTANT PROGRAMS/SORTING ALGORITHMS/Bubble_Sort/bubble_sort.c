#include <stdio.h>
void bubble_sort(int *arr, int n)
{

    int i, j;
    for (i = 0; i < n - 1; i++)
    {

        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array: \n");
    for (int j = 0; j < n; j++)
    {
        printf("%d\t", arr[j]);
    }
}

void main()
{
    int arr2[] = {7, 9, 1, 8, 6, 5};
    int n = sizeof(arr2) / sizeof(arr2[0]);
    printf("The Array before Sorting: \n");
    for (int j = 0; j < n; j++)
    {
        printf("%d\t", arr2[j]);
    }
    printf("\n");

    bubble_sort(arr2, n);
}