#include <stdio.h>
int main() {
    int n = 5, k = 2;
    if (n & (1 << k))
        printf("Bit is SET\n");
    else
        printf("Bit is NOT set\n");
    return 0;
}
