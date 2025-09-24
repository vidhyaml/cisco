#include <stdio.h>
#include <string.h>

int main() {
    char s1[20], s2[20], s3[40];  // s3 should be large enough
    int i = 0, j = 0, k = 0;

    // Input strings
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // Merge strings alternately
    while (i < len1 && j < len2) {
        s3[k++] = s1[i++];
        s3[k++] = s2[j++];
    }

    // If any remaining characters in s1
    while (i < len1) {
        s3[k++] = s1[i++];
    }

    // If any remaining characters in s2
    while (j < len2) {
        s3[k++] = s2[j++];
    }

    s3[k] = '\0';  // terminate string

    printf("Merged string: %s\n", s3);
    return 0;
}
