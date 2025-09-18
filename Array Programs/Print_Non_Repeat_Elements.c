#include <stdio.h>

int main() {
    int arr[8] = {1, 1, 2, 3, 5, 2, 1, 7};
    int n = 8;
    int freq[8];

    // initialize freq with -1
    for (int i = 0; i < n; i++) {
        freq[i] = -1;
    }

    // count frequencies
    for (int i = 0; i < n; i++) {
        if (freq[i] == 0)  // already visited
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // mark duplicate
            }
        }
        freq[i] = count;
    }

    // print non-repeated elements (count == 1)
    printf("Non-repeated elements are: ");
    for (int i = 0; i < n; i++) {
        if (freq[i] == 1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
