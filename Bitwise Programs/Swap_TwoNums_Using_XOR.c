#include <stdio.h>
int main() {
    int a = 5, b = 7;
    printf("Before swapping.....");
    printf("\na = %d, b = %d",a,b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nAfter swapping.....");
    printf("\na = %d, b = %d\n", a, b);
    return 0;
}
