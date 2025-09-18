#include <stdio.h>

int main() {
    int arr[8] = {1, 1, 2, 3, 2, 2, 1, 7};
    int n = 8;
    int freq[8];   // frequency array
    int i, j;

    // Initialize all frequencies to -1
    for (i = 0; i < n; i++) {
        freq[i] = -1;
    }

    // Count frequencies
    for (i = 0; i < n; i++) {
        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // mark as visited
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    // Print only duplicates
    printf("Duplicate elements and their counts:\n");
    for (i = 0; i < n; i++) {
        if (freq[i] > 1) {
            printf("%d --> %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
