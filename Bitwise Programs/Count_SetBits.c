#include <stdio.h>
int countBits(int n) {
    int count = 0;
    while (n) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}
int main() {
    int n;
    printf("Input an integer value:");
    scanf("%d",&n);
    printf("Set bits = %d\n", countBits(n));
    return 0;
}
