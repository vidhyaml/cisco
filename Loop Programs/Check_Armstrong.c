#include <stdio.h>

int main() {
    int n, q, rem, result = 0, count = 0;
    printf("Enter Number: ");
    scanf("%d", &n);

    q = n;

    // Count number of digits
    while(q != 0) {
        count++;
        q = q / 10;
    }

    q = n;

    // Calculate sum of digits raised to the power of count
    while(q != 0) {
        rem = q % 10;
        int mul = 1;  // reset for each digit
        for(int i = 1; i <= count; i++) {
            mul *= rem;
        }
        result += mul;  // add only final power
        q = q / 10;
    }

    // Check if Armstrong
    if(result == n) {
        printf("%d is an Armstrong Number.\n", n);
    } else {
        printf("%d is not an Armstrong Number.\n", n);
    }

    return 0;
}
