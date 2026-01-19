**INSERTION SORT STEPS:**
1. **Iterate Through the Array**: Start from the second element (index 1) to the end of the array.
2. **Compare Current Element with Previous Elements**: For each element, compare it with the elements before it.
3. **Insert Element in Correct Position**: If the current element is less than its preceding element, move the current element to its correct position by shifting the larger elements one position to the right.
4. **Repeat Until Sorted**: Continue this process for all elements in the array until the entire array is sorted.

**PSEUDOCODE:**
```
   DECLARE n OF INTEGER
   INPUT n
   DECLARE arr : ARRAY[1:n] OF INTEGER
   INPUT arr
   FUNCTION insertion_sort(arr,n)
       FOR j = 1 to n do
           key = arr[j]
           i = j
           WHILE (i > 0 and arr[i - 1] > key) do
           BEGIN WHILE
               arr[i] = arr[i - 1]
               i = i - 1
           END WHILE
           arr[i] = key
       END FOR
       RETURN arr
   END FUNCTION 
```