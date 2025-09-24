#include <stdio.h>

int main() {
    char s[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    // Remove newline if present
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
    }

    // Traverse and copy characters
    for (i = 0; s[i] != '\0'; i++) {
        // copy non-space OR copy first space after a word
        if (!(s[i] == ' ' && s[i+1] == ' ')) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';  // terminate new string

    printf("Resultant string: %s\n", s);
    return 0;
}
