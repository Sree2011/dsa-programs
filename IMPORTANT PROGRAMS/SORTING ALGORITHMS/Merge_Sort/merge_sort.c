#include <stdio.h>
void Merge(int *arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int tempLeft[n1];
    int tempRight[n2];
    for (int i = 0; i < n1 - 1; i++)
    {
        tempLeft[i] = arr[left + i];
    }
    for (int j = 0; j < n2 - 1; j++)
    {
        tempRight[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (tempLeft[i] <= tempRight[j])
        {
            arr[k] = tempLeft[i];
            i++;
        }
        else
        {
            arr[k] = tempRight[j];
            j++;
        }
        k++;
    }
    // Copy remaining elements from tempLeft and tempRight (if any)
    while (i < n1)
    {
        arr[k] = tempLeft[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = tempRight[j];
        j++;
        k++;
    }
}

void MergeSort(int *arr, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        MergeSort(arr, left, mid);      // Recursively sort left half
        MergeSort(arr, mid + 1, right); // Recursively sort right half
        Merge(arr, left, mid, right);   // Merge the sorted halves
    }

    else
    {
        int n = sizeof(arr) / sizeof(arr[0]);
        for (int i = 0; i < n; i++)
        {
            printf("%d\n", arr[i]);
        }
    }
}

void main()
{
    int myArray[] = {6, 3, 0, 5};
    int g = sizeof(myArray) / sizeof(myArray[0]);
    for (int i = 0; i < g; i++)
    {
        printf("%d\n", myArray[i]);
    }
    MergeSort(myArray, 0, g - 1);
}
