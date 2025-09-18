#include <stdio.h>

// function to check perfect number
int isPerfect(int num) {
    if (num <= 1)
    return 0; // not perfect

    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

int main() {
    int arr[5] = {2, 6, 6, 28, 11};
    int n = 5;
    int count = 0;

    printf("Perfect numbers are: ");
    for (int i = 0; i < n; i++) {
        if (isPerfect(arr[i])) {
            printf("%d ", arr[i]);
            count++;
        }
    }

    printf("\nCount = %d\n", count);

    return 0;
}
