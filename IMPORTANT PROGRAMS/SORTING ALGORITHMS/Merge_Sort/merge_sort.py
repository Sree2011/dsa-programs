def MergeSort(arr, left, right):
    if left < right:
        mid = (left + right) / 2
        MergeSort(arr, left, mid)      # Recursively sort left half
        MergeSort(arr, mid + 1, right) # Recursively sort right half
        Merge(arr, left, mid, right)   # Merge the sorted halves

def Merge(arr, left, mid, right):
    n1 = mid - left + 1
    n2 = right - mid
    tempLeft = [], tempRight = []
    for i in range (0,n1 - 1):
        tempLeft[i] = arr[left + i]
    for j in range(0,n2-1):
        tempRight[j] = arr[mid + 1 + j]

    i,j,k = 0,0,left
    while i < n1 and j < n2 :
        if tempLeft[i] <= tempRight[j]:
            arr[k] = tempLeft[i]
            i+=1
        else:
            arr[k] = tempRight[j]
            j+=1
        k+=1

    # Copy remaining elements from tempLeft and tempRight (if any)
    while(i < n1):
        arr[k] = tempLeft[i]
        i+=1
        k+=1
    while(j < n2):
        arr[k] = tempRight[j]
        j+=1
        k+=1


myArray = [6, 3, 0, 5]
MergeSort(myArray, 0, len(myArray) - 1)
