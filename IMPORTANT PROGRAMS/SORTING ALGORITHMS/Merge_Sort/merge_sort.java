public class merge_sort {
    public static int[] MergeSort(int arr[], int left, int right) {
        if (left < right) {
            int mid = (left + right) / 2;
            MergeSort(arr, left, mid); // Recursively sort left half
            MergeSort(arr, mid + 1, right); // Recursively sort right half
            Merge(arr, left, mid, right); // Merge the sorted halves
        }

        return arr;
    }

    public static void Merge(int arr[], int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;
        int tempLeft[] = new int[n1];
        int tempRight[] = new int[n2];
        for (int i = 0; i < n1; i++) {
            tempLeft[i] = arr[left + i];
        }
        for (int j = 0; j < n2; j++) {
            tempRight[j] = arr[mid + 1 + j];
        }
        // Copy remaining elements from tempLeft and tempRight (if any)
        int i=0,j=0,k=0;
        while (i < n1) {
            arr[k] = tempLeft[i];
            i++;
            k++;
        }
        while (j < n2) {
            arr[k] = tempRight[j];
            j++;
            k++;
        }
    }

    public static void main(String args[]) {
        int myArray[] = { 6, 3, 0, 5 };
        int[] result = MergeSort(myArray, 0, myArray.length - 1);

        for (int i = 0; i < result.length; i++) {
            System.out.println(result[i]);
        }
    }

}
