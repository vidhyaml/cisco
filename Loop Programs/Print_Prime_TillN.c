#include <stdio.h>
int main() {
    int n, i, j, isPrime;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are: ", n);

    // Loop through numbers from 2 to N
    for(i = 2; i <= n; i++) {
        isPrime = 1; // assume i is prime

        // Check divisibility from 2 up to i/2
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0; // i is not prime
                break;
            }
        }

        // If prime, print it
        if(isPrime == 1)
            printf("%d ", i);
    }

    return 0;
}
