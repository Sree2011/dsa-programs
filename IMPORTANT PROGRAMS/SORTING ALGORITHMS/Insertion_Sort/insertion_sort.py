

def Insertion_sort(A, n):
        for j in range(1,n): 
            key = A[j]
            i = j
            while (i > 0 and A[i - 1] > key) :
                A[i] = A[i - 1]
                i = i - 1
            A[i] = key
    
        print(*A)

arr = [7, 9, 8, 1, 6, 5 ]
n = len(arr)
print("Original Array:")
print(*arr)

print()
print("Sorted Array:")
Insertion_sort(arr, n)
