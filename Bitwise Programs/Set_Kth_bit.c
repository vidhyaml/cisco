#include <stdio.h>
int main() {
    int n = 5, k = 1;
    n = n | (1 << k);
    printf("Result = %d\n", n);
    return 0;
}
