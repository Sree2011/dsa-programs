def bubble_sort(arr,n):
    for i in range(n-1):
        # Last i elements are already
        # in place
        for j in range(n-i-1):
            if (arr[j] > arr[j + 1]):
                # swap elements
                temp = arr[j]
                arr[j] = arr[j + 1]
                arr[j + 1] = temp
        
    return arr
arr = [7,9,1,8,6,5]
n = len(arr)
print("The Array before Sorting:")
print(*arr)
print("Sorted Array:")
print(*bubble_sort(arr,n))
