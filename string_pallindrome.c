#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    // Check palindrome by comparing characters from both ends
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            flag = 0;  // Not a palindrome
            break;
        }
    }

    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
