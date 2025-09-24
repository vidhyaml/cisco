#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // allows spaces in input

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check for alphabetic characters only
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Convert uppercase to lowercase for simplicity
            if(ch >= 'A' && ch <= 'Z')
                ch = ch + 32;  // 'A'->'a', 'B'->'b', etc.

            // Check for vowels
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
        }
    }

    printf("Number of vowels: %d\n", vowels);


    return 0;
}
