#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;                       // assume first element is minimum
        for (int j = i+1; j < n; j++) {        // find minimum in rest
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // swap
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original array: ");
    for (int i=0; i<n; i++) printf("%d ", arr[i]);

    selectionSort(arr, n);

    printf("\nSorted array (Selection Sort): ");
    for (int i=0; i<n; i++) printf("%d ", arr[i]);

    return 0;
}
