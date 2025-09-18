#include <stdio.h>

// function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

// function to check strong number
int isStrong(int num) {
    int sum = 0, temp = num;

    while (temp > 0) {
        int digit = temp % 10;        // get last digit
        sum += factorial(digit);      // add factorial
        temp /= 10;                   // remove last digit
    }

    return (sum == num);             // return 1 if strong
}

int main() {
    int arr[6] = {2, 2, 3, 4, 145, 6};
    int n = 6;
    int count = 0;

    printf("Strong numbers are: ");
    for (int i = 0; i < n; i++) {
        if (isStrong(arr[i])) {
            printf("%d ", arr[i]);
            count++;
        }
    }

    printf("\nCount = %d\n", count);
    return 0;
}
