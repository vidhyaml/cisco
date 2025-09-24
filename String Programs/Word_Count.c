#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;
    int inWord = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse the string using array indexing
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            count++;
        }
    }

    // Print the result
    printf("Total number of words: %d\n", count);

    return 0;
}