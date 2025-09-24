#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Bubble Sort
    for (int i = 0; i < len-1; i++) {
        for (int j = 0; j < len-i-1; j++) {
            if (str[j] > str[j+1]) {  // compare ASCII values
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }

    printf("Sorted string: %s\n", str);
    return 0;
}
