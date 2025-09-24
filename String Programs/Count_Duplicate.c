#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};  // To store frequency of ASCII chars

    // Input string
    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Read including spaces

    // Count frequencies
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Print duplicates
    printf("Duplicate characters:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1) {
            printf("%c -> %d times\n", i, freq[i]);
        }
    }

    return 0;
}
