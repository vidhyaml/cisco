#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;

    // Input validation: positive number
    do {
        printf("Enter the number of terms: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid input! Please enter a positive number.\n");
    } while(n <= 0);

    printf("Fibonacci series:\n");

    for(int i = 1; i <= n; i++) {
        if(i == 1)
            next = a;
        else if(i == 2)
            next = b;
        else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
    }

    printf("\n");
    return 0;
}
