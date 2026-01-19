
public class insertion_sort {
    public static void Insertion_sort(int A[], int n) {
        for (int j = 1; j < n; j++) {
            int key = A[j];
            int i = j;
            while (i > 0 && A[i - 1] > key) {
                A[i] = A[i - 1];
                i = i - 1;
            }
            A[i] = key;
        }

        for (int k = 0; k < n; k++) {
            System.out.printf("%d ", A[k]);
        }
    }

    public static void main(String args[]) {
        int arr[] = { 7, 9, 8, 1, 6, 5 };
        int n = arr.length;
        System.out.printf("Original Array: \n");
        for (int i = 0; i < n; i++) {
            System.out.printf("%d ", arr[i]);
        }

        System.out.printf("\n");
        System.out.printf("Sorted Array: \n");
        Insertion_sort(arr, n);
    }
}
