#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {          // number of passes
        for (int j = 0; j < n-i-1; j++) {    // compare adjacent
            if (arr[j] > arr[j+1]) {         // swap if wrong order
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original array: ");
    for (int i=0; i<n; i++) printf("%d ", arr[i]);

    bubbleSort(arr, n);

    printf("\nSorted array (Bubble Sort): ");
    for (int i=0; i<n; i++) printf("%d ", arr[i]);

    return 0;
}
