#include <stdio.h>
int main() {
    int n = 7, k = 1;
    n = n & ~(1 << k);
    printf("Result = %d\n", n);
    return 0;
}
