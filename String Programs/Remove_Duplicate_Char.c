#include <stdio.h>
#include <string.h>

// Used as index in the modified string
char* removeDuplicate(char* s) {
    int index = 0;
    int i, j;
    int len = strlen(s);

    // Traverse through all characters
    for (i = 0; i < len; i++) {
        
        // Check if s[i] is present before it  
        for (j = 0; j < i; j++) 
            if (s[i] == s[j])
                break;
        
        // If not present, then add it to result
        if (j == i)
            s[index++] = s[i];
    }
    
    // Resize the string to remove extra characters
    s[index] = '\0';
    
    return s;
}

// Driver code
int main() {
    char s[100];
    printf("Enter a string : ");
    fgets(s, sizeof(s),stdin);
    printf("After removing duplicates string becomes:");
    printf("%s\n", removeDuplicate(s));
    return 0;
}