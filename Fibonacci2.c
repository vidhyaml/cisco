#include <stdio.h>

int fibonacci(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    // Input validation
    do {
        printf("Enter the number of terms: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid input! Please enter a positive number.\n");
    } while(n <= 0);

    printf("Fibonacci Series: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}
