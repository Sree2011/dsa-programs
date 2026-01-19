public class bubble_sort {
    public static void Bubble_sort(int arr[], int n) {

        int i, j;
        for (i = 0; i < n - 1; i++) {

            // Last i elements are already
            // in place
            for (j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // swap elements
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        System.out.printf("Sorted Array: \n");
        for (j = 0; j < n; j++) {
            System.out.printf("%d ", arr[j]);
        }
    }

    public static void main(String args[]) {
        int arr2[] = { 7, 9, 1, 8, 6, 5 };
        int n = arr2.length;
        System.out.println("The Array before Sorting:");
        for (int j = 0; j < n; j++) {
            System.out.printf("%d ", arr2[j]);
        }
        System.out.println();
        Bubble_sort(arr2, n);
    }

}