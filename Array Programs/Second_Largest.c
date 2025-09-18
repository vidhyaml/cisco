#include <stdio.h>

int main() {
    int arr[5] = {1, 21, 51, 21, 11};
    int n = 5;

    int first = -99999, second = -99999; // very small initial values

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            // update both first and second
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            // update only second
            second = arr[i];
        }
    }

    if (second == -99999)
        printf("No second largest element\n");
    else
        printf("Second largest element = %d\n", second);

    return 0;
}
