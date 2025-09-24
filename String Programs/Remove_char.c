#include <stdio.h>

int main() {
    char s[100], ch;
    int i, j = 0;

    // Input string
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    // Remove newline if present
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
    }

    // Input character to delete
    printf("Enter character to delete: ");
    scanf("%c", &ch);

    // Traverse and copy only non-matching characters
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != ch) {
            s[j++] = s[i];  // keep this character
        }
    }
    s[j] = '\0';  // end the new string

    printf("Resultant string: %s\n", s);
    return 0;
}
