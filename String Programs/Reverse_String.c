#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Input a String: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    int len = strlen(str);
    if(str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }

    printf("Reverse String: ");
    for(int i = len-1; i >= 0; i--) {
        printf("%c", str[i]);  // use %c for single character
    }
    printf("\n");
    return 0;
}
