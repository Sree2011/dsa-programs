#include <stdio.h>
void insertion_sort(int A[], int n)
{
    for (int j = 1; j < n; j++)
    {
        int key = A[j];
        int i = j;
        while (i > 0 && A[i - 1] > key)
        {
            A[i] = A[i - 1];
            i = i - 1;
        }
        A[i] = key;
    }

    for (int k = 0; k < n; k++)
    {
        printf("%d ", A[k]);
    }
}

void main()
{
    int arr[] = {7, 9, 8, 1, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    printf("Sorted Array: \n");
    insertion_sort(arr, n);
}