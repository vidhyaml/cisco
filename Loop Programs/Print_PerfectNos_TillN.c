#include <stdio.h>
int main() {
    int n, i, j, sum;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Perfect numbers up to %d are: ", n);

    // Loop through each number from 2 to N
    for(i = 2; i <= n; i++) {
        sum = 1;  // 1 is always a proper divisor

        // Find all proper divisors of i
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0)
                sum += j;
        }

        // If sum of divisors equals the number → perfect
        if(sum == i)
            printf("%d ", i);
    }

    return 0;
}
