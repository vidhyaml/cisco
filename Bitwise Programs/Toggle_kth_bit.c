#include <stdio.h>
int main() {
    int n = 5, k = 1; // toggle 1st bit (from right)
    n = n ^ (1 << k);
    printf("Result = %d\n", n);
    return 0;
}
